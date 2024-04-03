#include <stdio.h>
#include <string.h>
 
/*
    Nhap xuat danh sách n sinh viên
*/
 
int main(){
    char list[1000][50]; // mang chua toi da da 1000 sinh viên, moi tên sinh viên dài toi da 50 ký tu
    int n;
    do{
        scanf("%d", &n);
    }while(n < 1);
 
    for(int i = 0; i < n; i++)
        fgets(list, 1000, stdin);
        if(list[strlen(list)-1]=='\n')
	    	list[strlen(list)-1]='\0';
 
 
    // Xuat danh sách
    for(int i = 0; i < n; i++){
        printf("%d: %s\n", i+1, list[i]);
    }
}
