#include <stdio.h>
#include <string.h>
int main () {
	int n,tam,teste,zeros,uns,resultadozeros,resultadouns;
	char v[1000];
	long long unsigned visitante,i;
	scanf("%d", &teste);	
	while(teste!=0){
		while(teste--){
			for(n=0;n<=1000;n++){
				v[n]=0;
			}
			scanf ("%s", &v);
			tam=strlen(v);
			for(i=1,uns=0;i<tam;i+=2){
				uns+=v[i]-'0';
			}
			for(i=0,zeros=0;i<tam;i+=2){
				zeros+=v[i]-'0';
			}
			resultadouns=0;
			while (uns!=0) {
				resultadouns+=(uns%10);
				uns/=10;
			}
			resultadozeros=0;
			while (zeros!=0) {
				resultadozeros+=(zeros%10);
				zeros/=10;
			}
			printf ("%d\n", resultadouns+resultadozeros);
			resultadozeros=0;
			resultadouns=0;
		}
		scanf("%d", &teste);
	}
	return 0;
}
