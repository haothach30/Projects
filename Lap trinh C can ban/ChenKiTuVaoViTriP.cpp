#include <stdio.h>
#include <string.h>

void Insert (char c, int p, char st[]){
    int n, i;
    n=(strlen(st)+1);
    for(i=n-1; i>p; i--){
        st[i]=st[i-1];
    }
    st[i]=c;
    st[n]='\0';
}

int main (){
	char str[500];
	char c;
	int p;
fgets(str,500,stdin);
printf("%s",str);
scanf("%c%d", &c, &p);
Insert(c, p, str);
printf("%s",str);
return 0;
}
