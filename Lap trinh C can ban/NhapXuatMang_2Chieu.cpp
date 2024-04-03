#include <stdio.h>
// Nhap mang hai chieu C
void NhapMang(int a[10][10], int n, int m){   // mang co toi da 10 x 10, n hàng, m cot
    printf("Nhap mang hai chieu: \n");
    for(int i =0; i<n; i++){             // Duyet hàng
        for(int j =0; j<m; j++){
        	printf("Phan tu o [%d; %d]: ", i, j);
            scanf("%d", &a[i][j]);    // Duyet cot
        }
    }
}

// In mang hai chieu C
void InMang(int a[10][10], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
                printf("%d ", a[i][j]);     // %5d in cach nhau 1 khoang trang
        }
        printf("\n");                       // het hang se tu lui mot dong 
    }
}

int main () {
	int n, m, x;
	int a[10][10];
	scanf("%d", &n);
	scanf("%d", &m);
	NhapMang(a, n, m);
	scanf("%d", &x);
	InMang(a, n, m);
	
	int dem =0;
	for(int i =0; i<n; i++){             
        for(int j =0; j<m; j++){
        if (a[i][j] == x ){
        	printf("(%d, %d) ", i, j);
        	dem++;
        	}
        }
    }
	if(dem>0)
    printf("\n");
    printf("%d", dem);
}
