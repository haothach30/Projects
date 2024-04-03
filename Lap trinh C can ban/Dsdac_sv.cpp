#include "AStudentListLib.c"
#include<stdio.h>
#include<string.h>
void MakenullList(List *pL){
    pL->Last = 0;
}
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if(x[len-1] == '\n'){
        x[len - 1]='\0';
    }
}
void readList(List *L){
    MakenullList(L);
    ElementType x;
    int n;
    scanf("%d",&n);
         getchar();
     for(int i = 0; i<n;i++){
         fgets(x.MSSV,sizeof(x.MSSV),stdin);
         xoaXuongDong(x.MSSV);
         fgets(x.HoTen,sizeof(x.HoTen),stdin);
         xoaXuongDong(x.HoTen);
         scanf("%f %f %f",&x.DiemLT,&x.DiemTH1,&x.DiemTH2);
         getchar();
         insertList(x,L->Last+1,L);}
    
}
void printList(List L){
    Position i;
    for( i = 0; i<L.Last;i++){
        printf("%s - %s - %.2f - %.2f - %.2f\n",
        L.Elements[i].MSSV,L.Elements[i].HoTen,L.Elements[i].DiemLT,L.Elements[i].DiemTH1,L.Elements[i].DiemTH2);
    }
}

void codeSearch(List L, char MSSV[]){
    Position i;
    int check = 0;
    for(i=0; i<L.Last; i++){
        if(strcmp(L.Elements[i].MSSV, MSSV)==0){
            check = 1;
            printf("Tim thay sinh vien %s. Thong tin sinh vien:\n",MSSV);
            printf("%s - %s - %.2f - %.2f - %.2f\n",
        L.Elements[i].MSSV,L.Elements[i].HoTen,L.Elements[i].DiemLT,L.Elements[i].DiemTH1,L.Elements[i].DiemTH2);
        }
    }
    if(check ==0) printf("Khong tim thay sinh vien %s",MSSV);
}

int main(){
    List L;
    char MSSV[50];
    MakenullList(&L);
    readList(&L);
    printList(L);
    fgets(MSSV,sizeof(MSSV),stdin);
         xoaXuongDong(MSSV);
    codeSearch(L,MSSV);
}
