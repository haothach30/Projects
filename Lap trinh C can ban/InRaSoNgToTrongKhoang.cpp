#include <stdio.h>
#include <math.h>
void Ngto(int n) {
    int i, j;
    int ngt=1;
    if (n==1)
        printf("So nhap vao phai >=1!");
    else {
        for (i=2; i<n; i++) {
            ngt=1;
            for(j=2; j<=i; j++)
                if(i%j==0) {
                    ngt=0;
                }
            if(ngt==1)
                printf("%d", i);
        }
    }
}
int main () {
    int n;
    scanf("%d", &n);
    
    printf("Cac so nguyen to la: ");
    Ngto(n);
}

