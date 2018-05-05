#include <stdio.h>
void main () {
	float N,s;
	int i;
	float dinheiro [12]={100.00,50.00,20.00,10.00,5.00,2.00,1.00,0.50,0.25,0.10,0.05,0.01};
	int contagem [12]={0,0,0,0,0,0,0,0,0,0,0,0,};
	scanf ("%f", &N);
	printf ("NOTAS:\n");
	for (i=0,s=0;i<=6;i++){
	    while (N>=(s+dinheiro[i])){
	        s+=dinheiro[i];
	        contagem[i]++;
		}
		printf ("%d nota(s) de R$ %.2f\n", contagem[i], dinheiro[i]);
	}
	printf ("MOEDAS:\n");
	for (i=6;i<=12;i++){
	    while (N>=(s+dinheiro[i])){
	        s+=dinheiro[i];
	        contagem[i]++;
		}
		printf ("%d moeda(s) de R$ %.2f\n", contagem[i], dinheiro[i]);
	}
    return 0;
}

\\está dando time limit precisa de revisão!
