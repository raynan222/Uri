#include <stdio.h>

int main()
{
  int N,i,j,contador=1,nivel=0,aux;

  while(1){
    scanf("%d",&N);
    if(N==0){     // Quebra o While se N for igual a 0
      break;
    }
    int M[N][N];    // Define o tamanho da Matriz M
    if(N%2==0){     // Verifica se N é Par para tratar a condição do meio da matriz
      aux=N/2;
    }
    if(N%2==1){     // Verifica se N é Impar para tratar a condição do meio da matriz
      aux=(N/2)+1;
    }

    for(contador=1,nivel=0;nivel!=aux;contador++,nivel++){      // Preenche a matriz Contador e o numero que esta sendo colocado na matriz M Nivel e a borda que não é mais tocada
      for(i=nivel;i<N-nivel;i++){
        for(j=nivel;j<N-nivel;j++){
          M[i][j]=contador;
        }
      }
    }

    for(i=0; i<N; i++){     // Imprime a matriz M com a condição de indentação desejada
      for(j=0; j<N; j++){
        if(j==0){
          printf("%3d",M[i][j]);
        }
        else{
          printf(" %3d",M[i][j]);
        } 
      }
      printf("\n");
    }
    printf("\n");

  }
  return 0;
}
