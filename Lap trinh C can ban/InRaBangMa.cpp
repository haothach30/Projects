#include <stdio.h>
 
int main(){
    int x;
    char c; 
    scanf("%d", &x);
    c = x;
    printf("Ky tu co bo ma ASCII ");
    printf("%d la: ", x);
    printf("'%c'.\n", c);
    return 0;
    
}
