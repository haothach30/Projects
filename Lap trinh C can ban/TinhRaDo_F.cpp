#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() 
{
	//Khai bao bien
	float a;
	float b;
	
	//Nhap lieu
	printf("Moi ban nhap vao nhiet do C: ");
	scanf("%f", &a);
	
	//Tinh toan
	b = 1.8*a+32;
	
	//Xuat ra man hinh
	printf("%.0f", a);
	printf(" do C = %.2f", b);
	printf(" do F");
	
	return 0;
}
