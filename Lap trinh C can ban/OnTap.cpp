#include <stdio.h>
int main(){
	int i, j, s, n, m;
	s=0;
	scanf("%d%d", &n, &m);
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++)
		s=s+2;
	}
	printf("s = %d", s);
	return 0;
}
