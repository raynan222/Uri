#include <stdio.h>

int main () {

    int linhaColuna,aux1=1,aux2=0,aux3=2,i,j;
    
    scanf("%d", &linhaColuna);
    
    while(linhaColuna!=0){
        
        for(i=1;i<linhaColuna+1;i++){
            for(j=1;j<linhaColuna+1;j++){
                if(aux2==0){
                    if(aux1>=101){
                        printf("");
                    }
                    if(aux1>=10 && aux1<100){
                        printf(" ");
                    }
                    if(aux1<10){
                        printf("  ");
                    }
                    printf("%d", aux1);
                    aux1++;
                }
                if(aux2!=0){
                    if(aux2>=101){
                        printf("");
                    }
                    if(aux2>=10 && aux2<100){
                        printf(" ");
                    }
                    if(aux2<10){
                        printf("  ");
                    }
                    printf("%d", aux2);
                    aux2--;
                    aux1=2;
                }
                if(j<linhaColuna){
                    printf(" ");
                }
            }
            aux2+=aux3;
            aux3++;
            printf("\n");
        }
        scanf("%d", &linhaColuna);
        aux1=1;
        aux2=0;
        aux3=2;
        printf("\n");
    }
    return 0;
}
