#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int a,b,c,maiorab,maiorc;
	scanf ("%d %d %d", &a, &b, &c);
	maiorab=(a+b+(abs(a-b)))/2;
	maiorc=(maiorab+c+(abs(maiorab-c)))/2;
	printf ("%d eh o maior\n", maiorc);
	return 0;
}
