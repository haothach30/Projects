package Buoi03;

public class SDDThang {

	public static void main(String[] args) {
		Diem a= new Diem(30, 60);
		Diem b= new Diem(45, 50);
		
		DThang AB= new DThang(a, b);
		System.out.println("Toa do AB: " +AB);
		
		DThang CD= new DThang();
		CD.nhap();
		
		
		System.out.println("Toa do CD: " +CD);
		System.out.println("Do dai CD: " +CD.doDai());
		
		CD.ttien(6, 8);
		System.out.println("CD sau khi tinh tien: " +CD);
		
	}
}
