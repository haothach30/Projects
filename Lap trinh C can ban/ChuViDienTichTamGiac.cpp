#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() 
{
	//Khai bao bien
	float a, b, c, p, C, S;
	
	//Nhap lieu
	printf("Moi ban nhap vao do dai ba canh tam giac: ");
	scanf("%f%f%f", &a, &b, &c);
	
	//Tinh toan
	if(a+b>c && a+c>b && b+c>a )
	{
	C = a+b+c;
	p= C/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	
	//Xuat ra man hinh
	printf("Chu vi: %.2f", C);
	printf("\nDien tich: %.2f", S);
	}
	else printf ("Kiem tra lai so do ba canh. Khong tao thanh tam giac!");
	getch ();
	return 0;
}
