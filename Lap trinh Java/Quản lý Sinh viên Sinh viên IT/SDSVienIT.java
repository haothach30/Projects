package Buoi04;

import java.util.Scanner;

import Buoi03.SinhVien;

public class SDSVienIT {

	public static void main(String[] args) {
		SinhVien s= new SinhVien();
		//s.nhap();
		//s.in();
		
		s= new SVienIT();
		s.nhap();
		s.in();
		
		
		//Quan li danh sach sinh vien...
		SinhVien ds[];
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap so sinh vien can quan li: ");
		int n= sc.nextInt();
		ds= new SinhVien[n];
		int c;
		for(int i=0; i<n; i++) {
			System.out.println("Nhap sinh vien thu: "+(i+1)+":");
			System.out.println("Ban chon nhap: Sinh vien(0) hoac Sinh vien IT(1): ");
			c= sc.nextInt();
			if(c==0) ds[i]= new SinhVien();
			else 	 ds[i]= new SVienIT();
			ds[i].nhap();
			ds[i].nhapDiem();
			ds[i].in();
		}
		sc.nextLine();
		System.out.println("Nhap MSSV can tim: ");
		String email= sc.nextLine();
		for(SinhVien e: ds) {
			if(e.layEmail().equals(email)) {
				System.out.println(e.layUser()+ ", diem trung binh: "+e.diemTB());
			}
			break;
		}
	}
}
