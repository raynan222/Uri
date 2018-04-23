#include <stdio.h>
int main() {
	int i,j;
	for(i=1,j=7;i<10;i+=2){
		printf("I=%d J=%d\n", i,j);
		printf("I=%d J=%d\n", i,j-1);
		printf("I=%d J=%d\n", i,j-2);
	}
	return 0;
}
