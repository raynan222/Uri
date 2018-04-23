#include <stdio.h>
int main() {
	int v [51];
	int i, j, balde, tam, n, l;
	int count;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &l);
		for(i=0; i<l;i++) {
			scanf("%d", &v[i]);
		}
		count=0;
		for(i=1;i<l;i++) {
			j = i-1;
			balde = v[i];
			while(j>=0 && v[j]>balde) {
				v[j+1]=v[j];
				j--;
				count++;
			}
			v[j + 1] = balde;
		}
		printf ("Optimal train swapping takes %d swaps.\n", count);
	}
	return 0;
}
