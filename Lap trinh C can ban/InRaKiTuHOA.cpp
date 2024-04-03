#include <stdio.h>
int main ()
//Chuong trinh nhap vao ki tu thuong in ra ki tu HOA
{
	//Khai bao bien
	char ch;
	scanf("%c", &ch);
	
	//Tinh toan
	ch=ch  - 32;
	
	//Xuat ra du lieu
	printf("%c", ch);
	return 0;
	
}
