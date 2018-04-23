#include <stdio.h>
int main() {
	int i,j;
	for(i=1,j=60;j>-1;j-=5){
		printf("I=%d J=%d\n", i,j);
		i+=3;
	}
	return 0;
}
