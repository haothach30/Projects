#include <stdio.h>
#include <conio.h>
int main ()
{
	int menu, number1, number2, total;
	
	printf("Moi thim nhap vao hai so nguyen: ");
	scanf("%d%d", &number1, &number2);
	printf("Nhap vao mot chon lua.\n");
	printf("1 = Cong\n");
	printf("2 = Tru\n");
	scanf("%d", &menu);
	switch (menu) {
		case 1: total=number1 + number2; break;
		case 2: total=number1 - number2; break;
		default: printf("Thao ta khong hop le!");
	}
	if (menu==1)
		printf("%d + %d = %d\n", number1, number2, total);
	else if(menu==2) 
		printf("%d - %d = %d\n", number1, number2, total);
	
	getch ();
	return 0;
}
