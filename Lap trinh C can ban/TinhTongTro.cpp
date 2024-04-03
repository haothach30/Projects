#include <stdio.h>
#include <conio.h>
int main ()
{
	int R1,R2,R3;
	printf("Nhap vao R1,R2,R3: "); scanf("%d%d%d", &R1,&R2,&R3);
	float Rtong = R1 + (R2*R3)/(R2+R3);
    printf("\nTong dien tro cua mach la: %0.2f", Rtong);
	
	return 0;
	getch();
}
