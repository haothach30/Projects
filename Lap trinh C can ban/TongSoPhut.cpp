#include <stdio.h>
#include <conio.h>
int main ()
{
	float h, m, M;
	scanf("%f%f", &h, &m);
	M=60*h + m;
	printf("%.0f gio %.0f phut = %.0f phut",h, m, M);
	getch();
	return 0;
	
}
