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
int pilhaVazia(pilha *p);     // Função que verifica se a pilha voltou para o seu inicio (-1)
void criaPilha(pilha *p);     // Função que retorna a pilha ao inicio (-1)

int main () {
  pilha *parenteses = (pilha*)malloc(sizeof(pilha));      // Cria o ponteiro do parenteses(Pilha)
  char polinomio[MAXIMO];     // String com o polinomio
  int i,aux;
  criaPilha(parenteses);      // Inicia a pilha dos parenteses
  getchar();      // Limpa o buffer do teclado
  while(scanf("%s",&polinomio) != EOF){
    aux=strlen(polinomio);      // Determina se a entrada foi somente um 'Enter'
      for(i=0;polinomio[i]!='\0';i++){      // Roda ate o fim do polinomio inserido
        if(polinomio[i]=='(' || polinomio[i]==')'){     // Verifica se em determinada casa i da string e um parenteses
          push(parenteses, polinomio[i]);
          if(parenteses->vetor[0]==')'){      // Condição de parada se houver um ) no fundo da pilha nao e possivel ser correto o Polinomio
            break;
          }
          if(parenteses->vetor[parenteses->topo-1]=='(' && parenteses->vetor[parenteses->topo]==')'){     // Verifica se um par de parenteses "()" foi achado e os retira da pilha
            pop(parenteses);
            pop(parenteses);
          }
        }
      }
    
    if(pilhaVazia(parenteses)==1 && aux!=0){      // Se a função retornar que esta no começo da pilha(-1) o polinomio continha somente pares completos
      printf("correct\n");
      criaPilha(parenteses);      // Retorna ao inicio da pilha para realizar novos testes
    }
    if(pilhaVazia(parenteses)==0 && aux!=0){      // Se a função não retornar que esta no começo da pilha o polinomio continha somente pares imcompletos
      printf("incorrect\n");
      criaPilha(parenteses);      // Retorna ao inicio da pilha para realizar novos testes
    }
  }


return 0;
}

void push(pilha *p,char x) {     // Função Push
  p->topo++;
  p->vetor[p->topo]=x;
}

void pop(pilha *p){     // Função Pop
	p->topo--;
}

int pilhaVazia(pilha *p){     // Função que verifica se a pilha voltou para o seu inicio (-1)
  if (p->topo==-1){
    return 1;
  }else{
    return 0;
  }
}

void criaPilha (pilha *p){      // Função que retorna a pilha ao inicio (-1)
  p->topo=-1;
}
