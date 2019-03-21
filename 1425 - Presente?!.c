#include <stdio.h>

int main () {

  int n,m;

  while(1){
    scanf("%d %d", &n, &m); // RECEBE N(TOTAL DE PEDRAS ANTES DA MARGEM) E M(PEDRA DO PRESENTE)
    if (n==0 && m==0){
      break;
    }
    int i=2;
    int localizacao=1;
    int flag=0;
    if(m>34){
      printf("Let me try!\n");
    }
    else{
      while( localizacao>0 && localizacao<n+1 ){ // ENQUANTO A LOCALIZACAO FOR ACIMA DE MARGEM(0) E MENOR QUE A MARGEM POSTERIOR(N+1)
        if(localizacao==m){ // SE A LOCALIZACAO FOR IGUAL AO LOCAL DO PRESENTE
          flag++;
          break;
        }
        if(localizacao<m){  // SE A LOCALIZACAO FOR MENOR QUE O LOCAL DO PRESENTE
          if( (localizacao+(2*i-1)) < n+1){ // SE A LOCALIZACAO TAMBEM FOR MENOR QUE A MARGEM POSTERIOR(N+1)
            localizacao = localizacao + (2*i-1); // REALIZA UM PULO PRA FRENTE
          }
          else{
            localizacao = localizacao - (2*i-1); // SE NAO REALIZA UM PULO PRA TRAS
          }
          i++; // INCREMENTA O CONTADOR I PARA A FORMULA DA DISTANCIA DOS PULOS
        }
        else{ // SE A LOCALIZACAO FOR MAIOR QUE O LOCAL QUE O PRESENTE ESTA
          if ( (localizacao-(2*i-1)) > 0){ // SE A LOCALIZACAO DE UM PULO PARA TRAS NAO PASSAR A MARGEM O REALIZA
            localizacao = localizacao - (2*i-1);
          }
          else{ // SE NAO REALIZA UM PULO PRA FRENTE
            localizacao = localizacao + (2*i-1);
          }
          i++;  // INCREMENTA O CONTADOR I PARA A FORMULA DA DISTANCIA DOS PULOS
        }
      }
      if(flag!=0){
        printf("Let me try!\n");
      }
      else{
        printf("Don't make fun of me!\n");
      }
    }
  }

  return 0;
}
