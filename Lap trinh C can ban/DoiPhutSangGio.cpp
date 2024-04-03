#include <stdio.h>
#include <conio.h>
int main ()
{
	float M, h;
	double m;
	scanf("%f", &M);
     h = M/60;
     m = M % 60;
	printf("%.0f phut = %.0f gio %.0f phut", M, h, m);
	
	getch();
	return 0;
	
}
