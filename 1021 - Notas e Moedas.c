#include <stdio.h>
int main () {
	double N,s;
	int i;
	double dinheiro [12]={100.00,50.00,20.00,10.00,5.00,2.00,1.00,0.50,0.25,0.10,0.05,0.01};
	int contagem [12]={0,0,0,0,0,0,0,0,0,0,0,0};
	scanf ("%lf", &N);
	N=N+0.005;
	for (i=0,s=0;i<12;i++){
		while (N>=(s+dinheiro[i])){
		        s+=dinheiro[i];
		        contagem[i]++;
		}
	}
	printf ("NOTAS:\n");
	for (i=0,s=0;i<=5;i++){
		printf ("%d nota(s) de R$ %.2lf\n", contagem[i], dinheiro[i]);
	}
	printf ("MOEDAS:\n");
	for (i=6;i<=11;i++){
		printf ("%d moeda(s) de R$ %.2lf\n", contagem[i], dinheiro[i]);
	}
    return 0;
}
