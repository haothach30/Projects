void main ()
{
	clrscr ();
	List L;
	ElementType X;
	Position;
	MakeNull_List (&L);
	Read_List (&L);
	printf("\n\nDanh sach vua nhap la: \n ");
	Print_List (L);
	printf("\nNhap noi dung can them");
	scanf("%d", &X);
	printf("Nhap noi dung can them");
	scanf("%d", &P);
	Insert_List(X, P, &L;
	printf("Danh sach sau khi them phan tu %d vao vi tri %d la \n\n", X, P);
	Print_List (L);
	printf("\n\n nhap vi tri can xoa "); scanf("%d", &P);
	Delete_List(P, &L);
	printf("\n\nDanh sach sau khhi xoa phan tu o vi tri %d la\n\n", P);
	Print_List(L);
	getch();
	}
