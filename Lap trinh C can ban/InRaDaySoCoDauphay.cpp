#include <stdio.h>
int main ()
{
    int n, i;
    scanf("%d", &n);
    	if (n==1)
    	printf("1$ ");
		else if (n!=1)
		{
		
    for (i=1; i<n; i++) {
			
	
    printf("%d, ", i);}
    printf("%d$", n);
    		
		}
return 0;
}
