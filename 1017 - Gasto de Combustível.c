#include <stdio.h>
#define kml 12
int main () {
	double tempo, velocidade;
	scanf ("%lf %lf", &tempo, &velocidade);
	printf ("%.3lf\n", (tempo*velocidade)/kml);
	return 0;
}
