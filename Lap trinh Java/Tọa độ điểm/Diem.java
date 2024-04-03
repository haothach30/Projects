package buoi03;

import java.util.Scanner;

public class Diem {
	private int x, y;
	public Diem () {
		x= 0;
		y= 0;
	}
	public Diem(int x1, int y1) {
		x= x1;
		y= y1;
	}
	public Diem (Diem d) {
		x= d.x;
		y= d.y;
	}
	public void in() {
		System.out.println("("+x+ ";" +y+")");
	}
	public void in(String s) {
		System.out.println(s);
		in();
	}
	@Override
	public String toString() {
		return "Diem (" + x + ";" + y + ")";
	}
	public void nhap() {
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap vao toa do x: ");	x= sc.nextInt();
		System.out.println("Nhap vao toa do y: ");	y= sc.nextInt();
	}
	
	public void ttien(int dx, int dy) {
		x+= dx;
		y+= dy;
	}
	
	public float kCach(Diem b) {
		return (float) Math.sqrt(Math.pow(x-b.x, 2) + Math.pow(y-b.y, 2));
	}


}
