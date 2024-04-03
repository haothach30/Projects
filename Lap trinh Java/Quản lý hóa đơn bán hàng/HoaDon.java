package Buoi05;

import java.util.Scanner;

import Buoi03.Date;

public class HoaDon {
	private String mso, tuade, nvien;
	private Date nlap;
	private KhachHang k;
	private CT_HD c[];		//de quan ly danh sach cac hoa don
	private int sl;
	
	public HoaDon() {
		nlap= new Date();
		k= new KhachHang();
		mso= new String();
		tuade= new String();
		nvien= new String();
		c= new CT_HD [20];		//toi da 20 hoa don
		sl= 0;
	}
	
	public HoaDon(HoaDon h) {
		nlap= new Date(h.nlap);
		k= new KhachHang(h.k);
		mso= new String(h.mso);
		tuade= new String(h.tuade);
		nvien= new String(h.nvien);
		c= new CT_HD [h.c.length];
		sl= h.sl;
		for(int i=0; i<sl; i++)
			c[i]= new CT_HD(h.c[i]);
	}
	
	public void nhap() {
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap vao ma so: ");	mso= sc.nextLine();
		System.out.println("Nhap vao tua de: ");	tuade= sc.nextLine();
		System.out.println("Nhap vao ten nhan vien: ");	nvien= sc.nextLine();
	
		System.out.println("Nhap vao ngay lap hoa don: ");	
		nlap.nhap();
		
		int s=0; 
		System.out.println("--NHAP THONG TIN KHACH HANG--");
		System.out.println("--Khach hang(0), Khach hag VIP(1)-- ");
		s= sc.nextInt();
		if(s == 0) k= new KhachHang();
		else k= new KhachHangVIP();
		
		k.nhap();
		
		System.out.println("Nhap so luong chi tiet hang hoa: ");
		sl= sc.nextInt();
		for(int i=0; i<sl; i++) {
			System.out.println("Nhap chi tiet thu " +(i+1) );
			c[i]= new CT_HD();		
			c[i].nhap(); 
		}
	}
	
	public void in() {
		System.out.println("\n");
		System.out.println("MINH HẢO STORE");
		System.out.println("Tel: 0975 77 7676");
		System.out.println(mso +"\n" +tuade+ "\nNgay lap: " +nlap+ "\nNguoi lap: " +nvien+ "\nKhach hang: " +k);
		System.out.println("\nCac chi tiet hoa don: ");
		for(int i=0; i<sl; i++) 
			System.out.println("+ " +(1+i) +c[i]);
		System.out.println("\nTong tien " +tong());
		System.out.println("----------------------------------------------------------------------------------");
	}
	
	public String toString () {
		String s= ("\n");
		s+= (mso +", "+tuade+ "\nNgay lap: " +nlap+ "\nNguoi lap: " +nvien+ "\nKhach hang: " +k);
		s+= ("\nCac chi tiet hoa don: ");
		for(int i=0; i<sl; i++) 
			s+= ("+ " +(1+i) +c[i]);
		s+= ("\nTong tien " +tong());
		s+= ("----------------------------------------------------------------------------------");
		return s;
	}
	
	public float tong() {
		float t=0.0f;			
		for(int i=0; i<sl; i++) 
			t += c[i].laySL() * c[i].layDG();
	
		t= t *((float)1.1 - k.layTLGiam());
		return t;
		}
}

