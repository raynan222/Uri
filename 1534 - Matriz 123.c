#include <stdio.h>

void preencheprinta (int matriz[72][72], int tamanho);

int main()
{
    int matriz[72][72],tamanho;
    
    while (scanf("%d", &tamanho) != EOF){
        
        preencheprinta(matriz,tamanho);
        
    }

    return 0;
}

void preencheprinta (int matriz[72][72], int tamanho){
    int i,j,aux1,aux2;
    
    aux1=0;
    aux2=tamanho-1;
        
    for(i=0;i<tamanho;i++,aux1++,aux2--){
        for(j=0;j<tamanho;j++){
            
            matriz[i][j]=3;
            matriz[i][i]=1;
            if(aux2==j){
                matriz[i][j]=2;
            }
        }
    }

    if(tamanho%2!=0){
      matriz[(int)(tamanho/2)][(int)(tamanho/2)]=2;
    }

    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
}
