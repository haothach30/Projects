#include <stdio.h>
void nhap(int a[], int &n){
    do{
        scanf("%d",&n);
    }
    while(n<2||n>99);
     
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
 
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int ktrant(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}

void demngto(int a[], int n){
	int t=0;
	for(int i=0; i<n; i++)
		if(ktrant(a[i]))
			t++;
	printf("%d ", t);
	}
 
void insonguyento(int a[], int n){
    for(int i=0;i<n;i++)
        if(ktrant(a[i]))
            printf("%d ",a[i]);
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    printf("--------------------------------\n");
    printf("So phan tu cua mang: 		%d\n", n);
    printf("Cac phan tu cua mang: 		");
    xuat(a, n);
    printf("\n");
    printf("So luong So Nguyen To: 		");
    demngto(a, n);
    printf("\n");
    printf("Cac So Nguyen To da nhap: 	");
    insonguyento(a,n);
    return 0;
}
