#include <stdio.h>
#define TAM 100000
int main () {
	int vpar[TAM],vimpar[TAM],i=0,par=0,impar=0,aux,k;
	long unsigned int n;
	scanf("%lu",&n);
	while(n--){
		scanf("%d", &k);
		if(k%2==0){
			vpar[par]=k;
			par++;
		}
		else{
			vimpar[impar]=k;
			impar++;
		}
	}
	for(n=1;n<par;n++){
		aux=vpar[n];
		k=n-1;
		while(vpar[k]>aux){
			vpar[k+1]=vpar[k];
			k--;
		}
		vpar[k+1]=aux;
	}
	for(n=1;n<impar;n++){
		aux=vimpar[n];
		k=n-1;
		while(vimpar[k]>aux){
			vimpar[k+1]=vimpar[k];
			k--;
		}
		vimpar[k+1]=aux;
	}
	for(i=0;i<par;i++){
		printf("%d\n", vpar[i]);
	}
	for(i=0;i<impar;impar--){
		printf("%d\n", vimpar[impar-1]);
	}
	return 0;
}
