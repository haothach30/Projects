#include <stdio.h>
int main ()
{
    int so, tongkiso=0;
    scanf("%d", &so);
        while(so!=0) {
            tongkiso=tongkiso+so%10;
            so=so/10;
        }
        printf("Number of digits: %d", tongkiso);
    return 0;
}
