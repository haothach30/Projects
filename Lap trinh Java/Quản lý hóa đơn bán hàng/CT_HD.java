package Buoi05;

import java.util.Scanner;

public class CT_HD {
	private int soluong;
	private long gia;
	
	private HangHoa h;		//do trong chi tiet phai co ten hang
	
	public CT_HD() {
		h= new HangHoa();
		soluong= 0;
		gia= 0;
	}
	
	public int laySL() {
		return soluong;
	}

	public float layDG() {
		return gia;
	}

	public CT_HD(CT_HD d) {
		h= new HangHoa(d.h);
		soluong= d.soluong;
		gia= d.gia;
	}
	
	public void nhap() {
		Scanner sc= new Scanner(System.in);
		System.out.println("--NHAP THONG TIN HANG HOA--");
		h.nhap();
		System.out.println("Nhap vao so luong ");	soluong= sc.nextInt();
		System.out.println("Nhap vao gia: ");	gia= sc.nextLong();
	}
	
	public void in() {
		System.out.println(h + "So luong: " +soluong+ ", Don gia: " +gia+ ", Thanh tien: " +soluong*gia);
	}
	
	public String toString () {
		return (h + "So luong: " +soluong+ ", Don gia: " +gia+ ", Thanh tien:  " +soluong*gia);
	}
}
