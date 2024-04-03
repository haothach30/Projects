#include <stdio.h>

int main(){
	int i,j;
	for (i=1;i<=9;i++){
		for (j=1;j<=10;j++){
			printf("%2d x %2d = %2d   %2d x %2d = %2d   %2d x %2d = %2d",
			i,j,i*j,i+1,j,(i+1)*j,(i+2),j,(i+2)*j);
			printf("\n");
		}
		printf("\n");
		i+=2;
	    }
	}
