#include <stdio.h>

int main()
{
    double M[12][12],aux=0;
    int coluna,i,j;
    char operacao;
    
    scanf("%d", &coluna);       //  Le a Coluna na qual a operação ocorrera
    scanf("%c", &operacao);     //  Le a operação a ser realizada
    operacao=getchar();         //  Retorna o Char lido como INT
    
    for(i=0;i<12;i++){          //  Le os valores a ser colocado na matriz
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(i=0;i<12;i++){          //  Soma todos os valores da coluna escolhida
        aux+=M[i][coluna];
    }

    if(operacao=='S'){           // Verifica a operação e imprime
        printf("%.1lf\n",aux);
    }

    if(operacao=='M'){           // Verifica a operação e imprime
        printf("%.1lf\n",aux/12);
    }

    return 0;
}
