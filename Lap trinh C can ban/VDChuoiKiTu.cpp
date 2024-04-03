#include <stdio.h>
#include <string.h>

int main(){
	char Ten[50];
	fgets(Ten, 50, stdin);
	if(Ten[strlen(Ten)-1]=='\n')
       Ten[strlen(Ten)-1]='\0';
	printf("%s\n", Ten);
	for(int i=0; i<strlen(Ten); i++)
		Ten[i]="$";
			printf("%s", Ten);
}
