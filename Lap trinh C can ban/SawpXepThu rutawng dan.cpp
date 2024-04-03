#include <stdio.h>
#include <ListLib.c>

void Makenull_List(List*pL){
    pL->Last=0;
}

void Read_List(List *L){
    int i, N;
    ElementType X;
    Makenull_List(L);
    scanf("%d", &N); fflush(stdin);
    for(i=0; i<N; i++){
        scanf("%d", &X ); fflush(stdin);
        insertList(X, endList(*L), L);
    }
}

void Print_List(List L){
for(int i=0; i<L.Last; i++)
    printf("%d ",  L.Elements[i]);
}

void Sort(List*pL){
    Position i, j, x;
    for(i=0; i<=pL->Last; i++){
        for(j=i+1; j<pL->Last; j++){
            if(pL->Elements[i]>pL->Elements[j]){
                x=pL->Elements[i];
                
                pL->Elements[i]=pL->Elements[j];
                pL->Elements[j]=x;
                 }
            }
        }
    }
int main(){
    List L;
    Makenull_List(&L);
    Read_List(&L);
    Print_List(L);
    Sort(&L);
    printf("\n");
    Print_List(L);
}
