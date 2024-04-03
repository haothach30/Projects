#include <stdio.h>
#include <math.h>
int main ()
{
	int i=0;
	int n;
	scanf("%d", &n);
	while (pow(2, i) < n)
	i++;
	printf("%d", i);
	return 0;
}
