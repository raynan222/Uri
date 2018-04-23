#include <stdio.h>
int main () {
	int pilha[50];
	int n,i,x;
	n=1;
	while (n>0) {
		scanf ("%d", &n);
		for (i=0;i<n;i++) {
			pilha[i]=i+1;
		}
		if (n>0) {
			printf ("Discarded cards: ");
		}
		while (n>2&&n<=50) {
			printf ("%d, ", pilha[0]);
			x=pilha[1];
			for (i=0;i<(n-1);i++) {
				pilha[i]=pilha[i+2];
			}
			pilha[n-2]=x;
			n--;
		}
		if (n>0) {		
			printf ("%d\n", pilha[0]);
			printf ("Remaining card: %d\n", pilha[1]);
		}
	}
	return 0;
}
