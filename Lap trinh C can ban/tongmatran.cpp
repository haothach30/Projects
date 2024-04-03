#include <stdio.h>
void Nhap(int a[][10], int M, int N) {
	int i, j;
	for(i=0; i<M; i++)
		for(j=0; j<N; j++) {
			printf("Phan tu o [%d; %d]: ", i, j); //[dong; cot]
			scanf("%d", &a[i][j]);
		}
}

void InMaTran(int a[][10], int M, int N) {
	int j, i;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++) {
			printf("%5d ",a[i][j]);}
			printf("\n");
	}
}

void CongMaTran(int a[][10], int b[][10], int M, int N, int c[][10]) {
	int i, j;
	for(i=0; i<M; i++)
		for(j=0; j<N; j++) 
			c[i][j] = a[i][j] + b[i][j];
		}
	
int main() {
	int a[10][10], b[10][10], N, M;
	int c[10][10];
	printf("Nhap dong M: "); scanf("%d", &M);
	printf("Nhap cot N: "); scanf("%d", &N);
	printf("--------------------------\n");
	printf("Nhap ma tran A\n");
	Nhap(a, M, N);
	printf("--------------------------\n");
	printf("Nhap ma tran B\n");
	Nhap(b, M, N);
    //printf("/*************************/\n");
	printf("Ma tran A\n");
	InMaTran(a, M, N);
	//printf("/*************************/\n");
	printf("Ma tran B\n");
	InMaTran(b, M, N);
    //printf("/*************************/\n");
	CongMaTran(a, b, M, N, c);
	printf("Ma tran tong C la:\n");
	InMaTran(c, M, N);
	
	return 0;
}
