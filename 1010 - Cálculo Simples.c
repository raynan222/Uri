#include <stdio.h>
int main() {
    double valor1, valor2;
    int cod1, cod2, quant1, quant2;
    scanf ("%d %d %lf %d %d %lf", &cod1, &quant1, &valor1, &cod2, &quant2, &valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n", (quant1*valor1)+(quant2*valor2));
    return 0;
}
