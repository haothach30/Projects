#include <stdio.h>
void Nhap(int a[10][10], int M, int N) {
	int i, j;
	for(i=0; i<M; i++)
		for(j=0; j<N; j++) {
			printf("Phan tu o [%d; %d]: ", i, j); //[dong; cot]
			scanf("%d", &a[i][j]);
		}
}

void InMaTran(int a[10][10], int M, int N) {
	int j, i;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++) {
			printf("%5d ",a[i][j]);}
			printf("\n");
	}
}
int main (){
	float T=0;
	int  a[10][10];
	int i, j, a, N ,M, Min;
	Min = (M>N) ? N: M;
	for(i=0; i<Min; i++)
		T=T+a[i] [i];
			printf("%f", T);
	return 0;
	}

