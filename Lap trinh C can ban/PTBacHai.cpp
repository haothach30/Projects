#include <stdio.h>
#include <math.h>
int main()
{
	//Khai bao
	float a, b, c, Delta, x, x1, x2;
	
	//Nhap 
	scanf("%f%f%f",&a, &b, &c);
	
	//Tinh toan
	if (a==0)
	{
		printf("He so a phai khac 0.");
	}
	else //a!=0
	{
		Delta=pow(b, 2) - 4*a*c;
		if (Delta<0){
			printf("VO NGHIEM");
		}
		else if (Delta==0){
			x1=-b/(2*a);
			printf("NGHIEM KEP\nx = %.2f", x1);
		}
		else //Delta>0
		{
			x1=((-b-sqrt(Delta))/(2*a));
			x2=((-b+sqrt(Delta))/(2*a));
			printf("NGHIEM PHAN BIET\nx1 = %.2f\nx2 = %.2f", x1, x2);
		}
	}
	
		return 0;
}
