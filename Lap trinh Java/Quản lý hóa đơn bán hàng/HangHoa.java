package Buoi05;

import java.util.Scanner;

import Buoi03.Date;

public class HangHoa {
	private int maso;
	private String ten;
	private String nha_SX;
	public HangHoa() {
		maso= 0;
		ten= new String();
		nha_SX= new String();	
	}
	
	public HangHoa(int ms, String t, String nsx ) {
		maso= ms;
		ten= new String(t);
		nha_SX= new String(nsx);	
	}
	
	public HangHoa(HangHoa d) {
		maso= d.maso;
		ten= new String(d.ten);
		nha_SX= new String(d.nha_SX);
	}
	
	public void nhap() {
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap vao so: ");	maso= sc.nextInt();
		System.out.println("Nhap vao ten: ");	ten= sc.nextLine();
		System.out.println("Nhap vao ten nha san xuat: ");	nha_SX= sc.nextLine();
	}
	
	public void in() {
		System.out.println(" [So: " +maso+ ", Ten: " +ten+ ", Nha san xuat: " +nha_SX+ "] ");
	}
	
	public String toString () {
		return (" [So: " +maso+ ", Ten: " +ten+ ", Nha san xuat: " +nha_SX+ "] ");
	}
}
