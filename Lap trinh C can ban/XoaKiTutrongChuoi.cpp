#include <stdio.h>
#include <string.h>

void Delete(int p,char st[]){
    int i;
    int n=strlen(st);
    for(i=p; i<n-1; i++){
        st[i]=st[i+1];
    }
    n=n-1;
    st[n]='\0';
}

int main(){
char str[500];
fgets(str,500,stdin);
printf("%s",str);
Delete(6,str);
printf("%s",str);
}
