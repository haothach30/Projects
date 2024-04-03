#include <stdio.h>
#include <conio.h>
int main ()
{
	//Khai bao bien
	char X;
	float a, b, c, d, e, f;
	
	//Nhap lieu 
	printf("Moi ban nhap vao ki tu dau tien cua ten: ");
	scanf("%c", &X);
	printf("Moi ban nhap vao diem: ");
	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    
    //Tinh toan
    f = (a+b+c+d+e)/5;
    
    //Xuat ra man hinh
    printf("\n%c", X);
    printf("\nLy thuyet  : %.2f", a);
    printf("\nThuc hanh 1: %.2f", b);
    printf("\nThuc hanh 2: %.2f", c);
    printf("\nthcu hanh 3: %.2f", d);
    printf("\nThuc hanh 4: %.2f", e);
    printf("\nTrung binh : %.2f", f);
    
    return 0;
    getch();
	
}
