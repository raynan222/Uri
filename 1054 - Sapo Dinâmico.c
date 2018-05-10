#include <stdio.h>
int main () {
	int N,i,maiorida,maiorvolta,toggle,sida,svolta,T;
	unsigned long long int D, M;
	char tipo;
	scanf ("%d",&T);
	for (i=0;i<T;i++){
		scanf ("%d %llu", &N, &D);
		while (N--){
			getchar();
			scanf ("%c-%llu", &tipo, &M);
				if (tipo=='B'){
					if ((M-sida)>maiorida){
						maiorida=(M-sida);
						sida=M;
					}
					if ((M-svolta)>maiorvolta){
						maiorvolta=(M-svolta);
						svolta=M;
					}
					toggle=0;
				}
				if (tipo=='S'){
					if(toggle%2==0){
						if ((M-svolta)>maiorvolta){
							maiorvolta=(M-svolta);
							svolta=M;
						}
					}
					else{
						if ((M-sida)>maiorida){
							maiorida=(M-sida);
							sida=M;
						}
					}
					toggle++;
				}
		}
		if (D-sida>maiorida){
			maiorida=D-sida;
		}
		if (D-svolta>maiorvolta){
			maiorvolta=D-svolta;
		}
		printf ("Case %d: %llu\n", i+1,(maiorida>maiorvolta?maiorida:maiorvolta));
	}
	
	return 0;
}
