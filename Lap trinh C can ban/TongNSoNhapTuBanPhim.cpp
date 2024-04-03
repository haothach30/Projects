#include <stdio.h>
int main(){
	int n;
	int tong=0;
	while(1){
		scanf("%d",&n);
		if(n==0)
			break;
		tong += n;
	}
	printf("%d",tong);
	return 0;
}
