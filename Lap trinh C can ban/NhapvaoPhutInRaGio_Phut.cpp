#include <stdio.h>
#include <conio.h>
int main ()
{
	int  M, sogiay, h, m;
	scanf ("%d", &M);
	sogiay= 60*M;
	h= sogiay / 3600;
	m= sogiay % 3600 / 60;

	printf("%d phut = %d gio %d phut", M, h, m);
	getch();
	return 0;
}
