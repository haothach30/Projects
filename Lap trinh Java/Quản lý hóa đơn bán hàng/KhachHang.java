package Buoi05;

import java.util.Scanner;

public class KhachHang {
	private String id, hten, dchi;
	public KhachHang() {
		id= new String();
		hten= new String();
		dchi= new String();
	}
	
	public KhachHang(String ID, String t, String dc) {
		id= new String(ID);
		hten= new String(t);
		dchi= new String(dc);
	}
	
	public KhachHang(KhachHang d) {
		id= new String(d.id);
		hten= new String(d.hten);
		dchi= new String(d.dchi);
	}
	
	public void nhap() {
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap vao ID: ");	id= sc.nextLine();
		System.out.println("Nhap vao ho va ten: ");		hten= sc.nextLine();
		System.out.println("Nhap vao dia chi: ");		dchi= sc.nextLine();
	}
	
	public void in() {
		System.out.println("ID: " +id+ ", Ho & ten: " +hten+ ", Dia chi: " +dchi);
	}
	
	public String toString() {
		String s=  ("ID: " +id+ ", Ho & ten: " +hten+ ", Dia chi: " +dchi);
		return s;
	}
	
	public float layTLGiam() {
		return 0;
	}
}
