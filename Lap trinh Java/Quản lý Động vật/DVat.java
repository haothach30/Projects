package Buoi04;

import java.util.Scanner;

public abstract class DVat {
	private String giong, mau;
	private float cnang;
	
	private static int count;
	
	public abstract void keu(); 
	
	public DVat(){
		giong= new String();
		mau= new String();
		cnang= 0.0f;
		count++;
	}
	
	public DVat (DVat d) {
		giong= new String(d.giong);
		mau= new String(d.mau);
		cnang= d.cnang;
		count++;
	}
	
	public void in() {
		System.out.println("[ Giong: "+giong+ ", mau: "+mau+", can nang: " +cnang+ "]");
	}
	
	public String toString() {
		return "[ Giong: "+giong+ ", mau: "+mau+", can nang: " +cnang+ "]";
	}
	
	public void nhap() {
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap giong: ");	giong= sc.nextLine();
		System.out.println("Nhap mau: ");	mau= sc.nextLine();
		System.out.println("Nhap can nang: ");	cnang= sc.nextFloat();
	}
	
	public static int laycount() {
		return count;
	}
}
