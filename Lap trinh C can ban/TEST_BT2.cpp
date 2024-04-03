#include <stdio.h>
#include <conio.h>

#define MaxLength 30

typedef int ElementType;
typedef int Position;
typedef struct {
	ElementType Elements[MaxLength];
	Position Last;
}List;

void makenullList(List *L){
	L->Last = 0;
}

int emptylist(List L){
	return (L.Last == 0);
}

Position FirstList(List L){
	return 1;
}

Position Endlist(List L){
	return L.Last +1;
}

Position Previous(Position P, List L){
	return P - 1;
}

Position Next(Position P, List L){
	return P + 1;
}

ElementType Retrieve(Position P, List L){
	return L.Elements[P - 1];
}

void insertList(ElementType X, Position P, List *L){
	int i=0;
	if(L->Last == MaxLength){
		printf("DS day khong them vao duoc! ");
	}
	else if((P<1) || (P>L->Last + 1)){
		printf("Vi tri khong hop le!");
	}
	else{
		for(i=L->Last; i>= P; i--)
		L->Elements[i] = 	L->Elements[i-1];
		L->Last ++;
		L->Elements[P-1] = X;
	}
}

void printList(List L){
	Position P;
	P= FirstList(L);
	printf("Bat dau in ds! ");
	while(P != Endlist(L)){
		printf("%d	", Retrieve(P, L));
		P= Next(P, L);
	}
}

void readList(List *L){
	int n;
	ElementType X; 
	makenullList(L);
	printf("\n\nNhap vao so phan tu trong ds! ");
	scanf("%d", &n);
	fflush(stdin);
	for(int i=0; i<n; i++){
		printf("Phan tu thu %d la: ", (i+1));
		scanf("%d", &X);
		insertList(X, Endlist(*L), L);
	}
}
int main()
{
List L;
makenullList(&L); //Khoi tao danh sach ddac rong
printf("\n\n Nhap danh sach tu ban phim");
readList(&L); //Nhap danh sach tu ban phim
printf("\n\nDanh sach vua nhap la :\n ");
printList(L);
getch();
}
