#include <stdio.h>


void fibDin(int indice, long long int vetFib[]);

int main()
{
    long long int vetFib[10000]={0,1}, numCaso, indiceDesejado, indiceMaisAlto=1;
    
    for(int i=2;i<10000;i++){
        vetFib[i]=4;
    }
    
    scanf("%d",&numCaso);
    
    while(numCaso--){
        scanf("%d",&indiceDesejado);
        
        while(vetFib[indiceDesejado]==4){
            fibDin(indiceMaisAlto+1, vetFib);
            indiceMaisAlto++;
        }
        printf("Fib(%d) = %llu\n", indiceDesejado, vetFib[indiceDesejado]);
    }
    return 0;
}

void fibDin(int indice, long long int vetFib[]){
    vetFib[indice]=vetFib[indice-1]+vetFib[indice-2];
}
