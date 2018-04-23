#include <stdio.h>
 
int main() {

    double a, b, media;
    scanf("%lf %lf", &a, &b);
    media = (a*3.5+b*7.5) / 11;    
    printf("MEDIA = %.05lf\n", media);
    
    return 0;
}
