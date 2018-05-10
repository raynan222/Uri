#include <stdio.h>
int main () {
	unsigned long long int maiorida,maiorvolta,sida,svolta;
	int T,toggle,i,N;
	unsigned long long int D, M;
	char tipo;
	scanf ("%d",&T);
	for (i=0;i<T;i++){
		scanf ("%d %llu", &N, &D);
		maiorida=0, maiorvolta=0, toggle=0, sida=0,svolta=0;
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
		if ((D-sida)>maiorida){
			maiorida=(D-sida);
		}
		if ((D-svolta)>maiorvolta){
			maiorvolta=(D-svolta);
		}
		printf ("Case %d: %llu\n", i+1,(maiorida>maiorvolta?maiorida:maiorvolta));
	}
	
	return 0;
}
