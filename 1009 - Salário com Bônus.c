#include <stdio.h>
int main() {
    double a,b;
    char s[100];
    scanf ("%s %lf %lf", &s, &a, &b);
    printf("TOTAL = R$ %.2lf\n",a+((b/100)*15));
    return 0;
}
