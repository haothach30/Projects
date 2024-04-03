package Buoi03;


//Ho ten: Thach Minh Hao
//MSSV: B2110937


import java.util.Scanner;

public class Gach {
	
	private String maso;
	private String mausac;
	private int soluong;
	private int dai;
	private int ngang;
	private long giaban;
	
	public Gach() {
		maso= new String();
		mausac= new String();
		soluong= 0;
		dai= 0;
		ngang= 0;
		giaban= 0;
	}
	
	public Gach(String ma, String mau, int sluong, int d, int ng, long gia) {
		maso= ma;
		mausac= mau;
		soluong= sluong;
		dai= d;
		ngang= ng;
		giaban= gia;
	}
	
	
	public long getGiaban() {		//lay gia ban
		return giaban;
	}

	
	public Gach (Gach d) {		//ham xd sao chep
		maso=d.maso;
		mausac= d.mausac;
		soluong= d.soluong;
		dai= d.dai;
		ngang= d.ngang;
		giaban= d.giaban;
	}
	
	public void nhap() {
		Scanner sc= new Scanner(System.in);
		System.out.print("Nhap vao ma so: ");		maso= sc.nextLine();
		System.out.print("Nhap vao mau sac: ");		mausac= sc.nextLine();
		System.out.print("Nhap vao so luong: "); 	soluong= sc.nextInt();
		System.out.print("Nhap vao do dai: ");		dai= sc.nextInt();
		System.out.print("Nhap vao chieu ngang: ");	ngang= sc.nextInt();
		System.out.print("Nhap vao gia ban: ");		giaban= sc.nextInt();
	}
	
	public void  in() {
		System.out.println("\t# Ma so: " 		+maso);	
		System.out.println("\t# Mau sac: " 		+mausac);	
		System.out.println("\t# So luong: " 	+soluong);
		System.out.println("\t# Do dai: " 		+dai);	
		System.out.println("\t# Chieu ngang: " 	+ngang);	
		System.out.println("\t# Gia ban: " 		+giaban);
	}
	
	public float giaBanLe() {
		return (float)giaban/ soluong;
	}
	
	public int dienTichToiDa() {
		return soluong* (dai * ngang);
	}
	
	public int soLuongHop(int D, int N) {
		double svd= Math.ceil((double)D/ dai);
		double svn= Math.ceil((double)D/ ngang);
		return (int)Math.ceil((svd * svn) / soluong);
	}
}
