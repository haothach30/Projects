package Buoi05;

import java.util.Scanner;

import Buoi03.Date;

public class KhachHangVIP extends KhachHang{
	private float tile;
	private Date d;
	public KhachHangVIP() {
		super();
		tile= 0.0f;
		d= new Date();
		}
	
	public KhachHangVIP(KhachHang k, float tl, Date n) {
		super(k);
		tile= tl;
		d= new Date(n);
		}
	
	public KhachHangVIP(KhachHangVIP k) {
		super((KhachHang) k);
		tile= k.tile;
		d= new Date(k.d);
	}
	
	public void nhap() {
		super.nhap();
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap vao ti le: ");	tile= sc.nextFloat();
		System.out.println("Nhap vao ngay tro thanh VIP: ");	d.nhap();
	}
	
	public void in() {
		super.in();
		System.out.println(", Ti le: " +tile+ ", Ngay tro thanh VIP: " +d );
	}
	
	public String toString() {
		return super.toString() + (", Ti le: " +tile+ ", Ngay tro thanh VIP: " +d  );
	}
	
	public float layTLGiam() {
		return tile;
	}
}
