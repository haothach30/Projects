#include <stdio.h>
#include <string.h>

int main(){
    char list[1000][50]; 
    int n;
    do{
        scanf("%d", &n);
    }while(n < 1);
 
    for(int i = 0; i < n; i++){
        fgets(list, 1000, stdin);
 		}
    for(int i = 0; i < n; i++){
        printf("%d: %s\n", i+1, list[i]);
        }
    
}
