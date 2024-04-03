#include <stdio.h>
#include <string.h>
int kiemTraDoiXung(char x[]){
	size_t len = strlen(x);
	for(int i=0; i<len/2; i++){
		if(x[i]!=x[len-i-1])
			return 0;
	}
	return 1;
}

int main (){
	char x[100];
	//fgets(x, 100, stdin);
	gets(x);
	printf("%s\n", x);
	if(kiemTraDoiXung(x)) 
		printf("YES");
	else printf("NO");
}
