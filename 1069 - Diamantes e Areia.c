#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 1001     // Limite da entrada N

typedef struct{     // Struct da Pilha
    int topo;
    char vetor[MAXIMO];
}pilha;


void push(pilha *p,char x);     // Função Push
void pop(pilha *p);     // Função Pop alterada para nao ter retorno
void criaPilha(pilha *p);     // Função que retorna a pilha ao inicio (-1)

int main () {
  pilha *diamantes = (pilha*)malloc(sizeof(pilha));      // Cria o ponteiro dos diamantes(Pilha)
  char carrinhoDeMinerio[MAXIMO];     // String com o minerio retirado
  int i,contador,N,flag=1;
  criaPilha(diamantes);      // Inicia a pilha dos diamantes
  scanf("%d",&N);
  N++;      // Incrementa o contador do laço
  while(N--){
    fgets(carrinhoDeMinerio,MAXIMO,stdin);  // Recebe o carrinho de minerio
    contador=0;
      for(i=0;carrinhoDeMinerio[i]!='\0';i++){      // Roda ate o fim do carrinho de minerio inserido
        if(carrinhoDeMinerio[i]=='<' || carrinhoDeMinerio[i]=='>'){     // Verifica se em determinada casa i da string e uma parte do diamante
          push(diamantes, carrinhoDeMinerio[i]);
          if(diamantes->vetor[diamantes->topo-1]=='<' && diamantes->vetor[diamantes->topo]=='>'){     // Verifica se foi encontrado um diamante "<>" e o retira da pilha
            pop(diamantes);
            pop(diamantes);
            contador++;     // Incrementa o contador de diamantes achados
          }
        }
      }
    if(flag!=1){      // O a função Fgets ja inseria um "ENTER" como entrada apos se determinar o numero de testes, afim de evitar que fosse feita uma saida indesejada foi criada a flag;
      printf("%d\n",contador);
      criaPilha(diamantes);     // Retorna a piha ao inicio para um novo caso de teste
    }
    flag--;     // Ao fim da primeira interação do codigo decrementa a flag para permitir o printf
  }
return 0;
}

void push(pilha *p,char x) {     // Função Push
  p->topo++;
  p->vetor[p->topo]=x;
}

void pop(pilha *p){     // Função Pop alterada para nao ter retorno
	p->topo--;
}

void criaPilha (pilha *p){      // Função que retorna a pilha ao inicio (-1)
  p->topo=-1;
}
