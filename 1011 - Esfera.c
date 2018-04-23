#include <stdio.h>
#define pi 3.14159
int main () {
	double raio;
	scanf("%lf", &raio);
	printf("VOLUME = %.3f\n",raio*raio*raio*pi*(4.0/3));
	return 0;
}
