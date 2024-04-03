#include <stdio.h>
#include <conio.h>
#include <math.h>
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}

void InMang(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}

void SapXep(int a[], int n){
	int t;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j]) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

int Tong(int a[], int n){
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum = sum + a[i]; }
	return sum;
}

void MinMax(int a[], int n){
	int max=0;
	int min=0;
	int i;
	for(i=0; i<n; i++) {
		min = a[0];
        if(a[i] < min) min=a[i];
    }
    printf("Min = %d, ", min);
    
    for(i=0; i<n; i++) {
    	max=a[1];
        if(a[i]>max) max =a[i];
    }
     printf("Max = %d", max);
}

void TrungBinh(int a[], int n) {
	int sum=0;
	
	for(int i=0; i<=(n-1); i++)
	{
		sum = sum + a[i]; }
		float Tb=0;
		Tb= 1.0*sum/(n);
	printf("Trung binh mang: %.2f", Tb);
}

void SoDaoNguoc(int a[], int n){
	for(int i=n-1; i>=0; i--)
		printf("%d ", a[i]);
}

int SoNgTo(int n){
	int i, j=1; 
	for(i=2; i<(int)sqrt(n); i++)
		if(n%i==0) j=0;
		return j;
}

void SoChan(int a[], int n){
	
		for(int i=0; i<n; i++){
			if (a[i] % 2 == 0)
				printf("%d ", a[i]);
	}
}

int main (){
	int n; int a[1000];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	NhapMang(a, n);
	printf("--------------------------------\n");
	printf("Mang vua nhap: ");
	InMang(a, n);
	SapXep(a, n);
	printf("\n");
	printf("Mang sau khi sap xep tang dan: ");
	InMang(a, n);
	printf("\n");
	printf("Tong cac phan tu cua mang: %d", Tong(a, n));
	printf("\n");
	MinMax(a, n);
	printf("\n");
	TrungBinh(a, n);
	printf("\n");
	printf("Mang nghich dao: ");
	SoDaoNguoc(a, n);
	printf("\n");
	printf("Cac phan tu la chan: ");
	SoChan(a, n); 
	printf("\n");
	printf("Cac so nguyen to da nhap: %d", SoNgTo(n));
}
