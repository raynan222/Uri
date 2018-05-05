#include <stdio.h>
int main () {
	int N,i,s;
	int cedulas [7]={100,50,20,10,5,2,1};
	int contagem [7]={0,0,0,0,0,0,0};
	scanf ("%d", &N);
	printf ("%d\n", N);
	for (i=0,s=0;i<7;i++){
	    while (N>=(s+cedulas[i])){
	        s+=cedulas[i];
	        contagem[i]++;
	    }
	    printf ("%d nota(s) de R$ %d,00\n", contagem[i], cedulas[i]);
	}
	return 0;
}
