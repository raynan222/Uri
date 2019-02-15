#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE 1000     // Limite da entrada N

typedef struct{     // Struct da Pilha
    int topo;
    int vetor[CAPACIDADE];
}pilha;


void push(pilha *p,int x);     // Função Push
void pop(pilha *p);     // Função Pop alterada para nao ter retorno
int pilhaVazia(pilha *p);     // Função que verifica se a pilha voltou para o seu inicio (-1)
void criaPilha(pilha *p);     // Função que retorna a pilha ao inicio (-1)

int main () {
  int N,vagao,contador=0,x=1;
  pilha *trem = (pilha*)malloc(sizeof(pilha));      // Cria o ponteiro do Trem(Pilha)
  
  scanf("%d",&N);     // Determina o numero de vagões
  while(1){
    criaPilha(trem);

    while(1){
      scanf("%d",&vagao);
      if(vagao==0){     // Termina laço de testes na quantidade de vagões(N) atuais
        printf("\n");
        break;
      }
      
      for(;vagao>x;x++){      // Realiza Push ate chegar ao numero anterior ao desejado, Como X inicia 1 cada push se incrementa o X para chegar ao valor almejado
        push(trem, x);
      }
      if(vagao==x){     // Realiza o Push do numero desejado
        push(trem, x);
        x++;
      }
      if(trem->vetor[trem->topo] == vagao){     // Realiza um Pop apesar de nao retornar valor, somente retornando a posição anterior
        pop(trem);
      }

      contador++;     // Contador que marca numero de vagões inseridos
      if(contador==N){
        if(pilhaVazia(trem)==1){      // Se a função retornar que esta no começo da pilha(-1) o trem era viavel
          printf("Yes\n");
          contador=0;     // Contador reseta para marcar o inicio de um novo teste
          x=1;      // Assim como o contador reinicia
          criaPilha(trem);      // Retorna ao inicio da pilha para realizar novos testes
        }
        else{
          printf("No\n");     // Quando a função retorna algo que nao seja o começo da pilha o trem era inviavel
          contador=0;     // Contador reseta para marcar o inicio de um novo teste
          x=1;      // Assim como o contador reinicia
          criaPilha(trem);      // Retorna ao inicio da pilha para realizar novos testes
        }
      }

    }
    scanf("%d",&N);     // Redetermina o numero de vagões dos testes
    if(N==0){
      break;
    }
  }

return 0;
}

void push(pilha *p,int x) {     // Função Push
  p->topo++;
  p->vetor[p->topo]=x;
}

void pop(pilha *p){     // Função Pop alterada para nao ter retorno
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
