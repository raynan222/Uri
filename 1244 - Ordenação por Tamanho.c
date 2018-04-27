#include <stdio.h>
#include <string.h>
int main() {
    char str[2600];
    int matriz[2][50],i,j,tam,a,n,aux1,aux2;
	scanf("%d", &n);
	getchar ();
	while(n--) {
		gets (str);
		tam=strlen(str);
		matriz[0][0]=0;
		for(i=0,j=1,a=0;i<tam;i++,j++){
			if(str[i]==' '){
				matriz[1][a]=j-1;
				a++;
				matriz[0][a]=i+1;
				j=0;
			}
		}
		if(j>1){
			matriz[1][a]=j-1;
		}
		for(i=1;i<=a;i++) {
			aux1=matriz[1][i];
			aux2=matriz[0][i];
			j=i-1;
			while(j>=0&&matriz[1][j]<aux1){
				matriz[1][j+1]=matriz[1][j];
				matriz[0][j+1]=matriz[0][j];
				j--;
			}
			matriz[1][j+1]=aux1;
			matriz[0][j+1]=aux2;
		}
		for(i=0;i<=a;i++){
			for(j=matriz[0][i];j<matriz[0][i]+matriz[1][i];j++){
				printf("%c", str[j]);
			}
			if(i!=a){
				printf(" ");
			}
		}
		printf("\n");
	}
    return 0;
}