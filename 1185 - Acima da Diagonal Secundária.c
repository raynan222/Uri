#include <stdio.h>

int main()
{
    double M[12][12],aux=0;
    int i,j,marcador=11;
    char operacao;
    
    scanf("%c", &operacao);     //  Le a operação a ser realizada
    
    for(i=0;i<12;i++){      //  Le os valores a ser colocado na matriz
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(i=0;i<11;i++){      //  Soma todos os valores da coluna escolhida
        for(j=0;j<marcador;j++){
          aux+=M[i][j];
        }
        marcador--;
    }

    if(operacao==83){     // Verifica a operação e imprime
        printf("%.1lf\n",aux);
    }

    if(operacao==77){     // Verifica a operação e imprime
        printf("%.1lf\n",aux/66);
    }

    return 0;
}
