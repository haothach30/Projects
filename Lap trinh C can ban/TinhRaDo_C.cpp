#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() 
{
	//Khai bao bien
	float a, b;
	
	//Nhap lieu
	printf("Moi ban nhap vao nhiet do F: ");
	scanf("%f", &a);
	
	//Tinh toan
	float  c=0.5556;
	b = c*(a-32);
	
	//Xuat ra man hinh
	printf("%.0f", a);
	printf(" do F = %.2f", b);
	printf(" do C");
	
	return 0;
	getch();
}
