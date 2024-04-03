#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main() 
{
	//Khai bao bien
	float D, R, C, S;
	const double PI=3.14;
	
	//Nhap lieu
	printf("Moi ban nhap vao duong kinh D: ");
	scanf("%f", &D);
	
	//Tinh toan
	R=D/2;
    C=2*PI*R;
    S=PI*R*R;
	printf("Chu vi: %.2f", C);
	printf("\nDien tich: %.2f", S);
	return 0;
}
