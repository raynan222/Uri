#include <stdio.h>
int main () {
	int i,n,num;
	int v[2001];
	for(i=0;i<2001;i++){
		v[i]=0;
	}
	scanf ("%d", &n);
	for (i=0;i<n;i++){
		scanf("%d", &num);
		v[num]+=1;
	}
	for (i=0;i<2001;i++){
		if (v[i]>0){
			printf("%d aparece %d vez(es)\n", i, v[i]);
		}
	}
	return 0;
}
