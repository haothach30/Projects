#include <stdio.h>
int main ()
{
    int i=1;
    int n;
    long Tong = 0;
    scanf("%d", &n);
    	while(i<=n)
    {
     Tong = Tong + i*i;
     i++;
 	}
    printf("%.0ld", Tong); 
    
    return 0;
}
