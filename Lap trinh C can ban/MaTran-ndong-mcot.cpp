#include <stdio.h>
int main (){
int dong, cot, a, b;
scanf("%d%d", &a, &b);
dong=0;
	while (dong<a) {
		printf("\n");
		cot=1;
		while (cot<=b)
		{
			printf("%d\t", dong+cot);
			cot++;
		}
		dong++;
		}
		return 0;
}
