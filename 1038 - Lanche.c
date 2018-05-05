#include <stdio.h>
int main () {
	double precos[5]={4.00,4.50,5.00,2.00,1.50};
	int item,quantidade;
	scanf ("%d %d", &item, &quantidade);
	printf ("Total: R$ %.2lf\n", precos[item-1]*quantidade);
	return 0;
}
