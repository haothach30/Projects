#include <stdio.h>
#include <conio.h>

#pragma pack(1) // Tránh b? làm tròn b? nh?.
// Khai báo c?u trúc d? li?u sinh viên.
struct SinhVien
{
	char MaSo[30];
	float DiemToan, DiemLy, DiemHoa;
};
typedef struct SinhVien SINHVIEN; // Ð?i "struct SinhVien" thành "SINHVIEN"

void NhapDuLieu(SINHVIEN &);
void XuatSinhVien(SINHVIEN);
float TinhDiemTrungBinh(SINHVIEN);

// Hàm nh?p d? li?u sinh viên.
void NhapDuLieu(SINHVIEN &x) // Chú ý: Ph?i có &: Tham chi?u.
{
	fflush(stdin); // Xóa b? nh? d?m.
	printf("
Nhap vao ho ten: ");
	gets(x.MaSo);

	// Nh?p di?m toán.
	do{
		printf("
Nhap vao diem toan: ");
		scanf("%f", &x.DiemToan);

		if(x.DiemToan < 0 || x.DiemToan > 10)
		{
			printf("
Diem toan khong hop le. Xin kiem tra lai !");
		}
	}while(x.DiemToan < 0 || x.DiemToan > 10);

	// Nh?p di?m lý.
	do{
		printf("
Nhap vao diem ly: ");
		scanf("%f", &x.DiemLy);

		if(x.DiemLy < 0 || x.DiemLy > 10)
		{
			printf("
Diem ly khong hop le. Xin kiem tra lai !");
		}
	}while(x.DiemLy < 0 || x.DiemLy > 10);

	// Nh?p di?m hóa.
	do{
		printf("
Nhap vao diem hoa: ");
		scanf("%f", &x.DiemHoa);

		if(x.DiemHoa < 0 || x.DiemHoa > 10)
		{
			printf("
Diem hoa khong hop le. Xin kiem tra lai !");
		}
	}
         while(x.DiemHoa < 0 || x.DiemHoa > 10);
}

// Hàm xu?t sinh viên.
void XuatSinhVien(SINHVIEN x)
{
	printf("
Ma so: %s", x.MaSo);
	printf("
Diem toan: %f", x.DiemToan);
	printf("
Diem ly: %f", x.DiemLy);
	printf("
Diem hoa: %f", x.DiemHoa);
	printf("
Diem trung binh la: %f", TinhDiemTrungBinh(x));
}

// Tính di?m trung bình c?a sinh viên.
float TinhDiemTrungBinh(SINHVIEN x)
{
	return (x.DiemToan + x.DiemLy + x.DiemHoa) / 3;
}

void main()
{
	SINHVIEN x;
	NhapDuLieu(x);
	XuatSinhVien(x);
	printf("
sizeof = %d", sizeof(x));
	getch();
}
