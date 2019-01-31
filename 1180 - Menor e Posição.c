#include <stdio.h>

int main(){
    
    long int insercor,quantidadeDeNumeros,menorValor=2147483647,posicao;
    
    scanf("%ld", &quantidadeDeNumeros);
    
    for(int i=0;i!=quantidadeDeNumeros;i++){
        scanf("%ld",&insercor);
        if(insercor<menorValor){
            posicao=i;
            menorValor=insercor;
        }
    }

    printf("Menor valor: %ld\nPosicao: %ld\n",menorValor,posicao);

    return 0;
}
/* esta resposta nao utiliza vetor */
