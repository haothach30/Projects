#include <stdio.h>
int main ()
{
	double s;
	int i = 1;
	float Tong = 0;
	scanf("%f", &s);
	while (Tong < s) {
			Tong = Tong + (1.0*1/(1+i));   
			i++; }
		printf("%d", i);
	return 0;
}
