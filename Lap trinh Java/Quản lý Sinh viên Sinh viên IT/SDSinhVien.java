package Buoi03;

import java.util.Scanner;

public class SDSinhVien {

	public static void main(String[] args) {
		
		
		
		SinhVien S1= new SinhVien();
		S1.nhap();
		S1.nhapDiem();
		System.out.println("\n");
		System.out.println("Thong tin sinh vien S1: " +S1);
		S1.Them("LTHDT", "A");
		System.out.println("Thong tin sinh vien S1 khi them 1 mon: " +S1);
		S1.Xoa("LTHDT");
		System.out.println("Thong tin sinh vien S1 su khi xoa 1 mon: " +S1);
		
		SinhVien S2= new SinhVien(S1);
		System.out.println("Thong tin sinh vien S2: " +S2);
		
		
	
		System.out.println("\n");
		System.out.println("Nhap danh sach sinh vien: ");
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap so sinh vien: ");
		int n= sc.nextInt();
		SinhVien ds[]= new SinhVien[n];
		for(int i=0; i<n; i++) 
			ds[i]= new SinhVien();
			for(int i=0; i<n; i++) {
				System.out.println("Nhap thong tin sinh vien thu " +(i+1)+ ":");
				ds[i].nhap();
				System.out.println("#NHAP DIEM MON HOC#");
				ds[i].nhapDiem();
			}
		
		System.out.println("Danh sach sinh vien da nhap: ");
		for(SinhVien S: ds)
			System.out.println("\t+" +S+ ", voi diem trung binh: "+S.diemTB());
		
		System.out.println("Danh sach sinh vien bi canh bao hoc vu: ");
		for(SinhVien S: ds) {
			if(S.diemTB()< 1)
				System.out.println("\t+"+(S.layMSo() +"-"+S.layHTen()));
		}
		
		
		
		System.out.println("Danh sach cac sinh vien co diem trung binh cao nhat: ");
		double Max= Double.MIN_VALUE;
		for(int i=0; i<n; i++) {
			if(ds[i].diemTB() > Max)
				Max= ds[i].diemTB();
		}	
		
		for(int i=0; i<n; i++) {
			if(ds[i].diemTB() == Max)
				System.out.println(("\t+" +ds[i].layMSo()+ " - " +ds[i].layHTen()));
		}
		
		System.out.println("Danh sach sinh vien duoc sap xep theo ten: ");
		for(int i=0; i<n-1; i++)
			for(int j=i+1; j<n; j++)
				if(ds[i].layTen().compareTo(ds[j].layTen())> 0) {		//compareTo la bieu thuc dung de so sanh CHUOI
					SinhVien t= ds[i];
					ds[i]= ds[j];
					ds[j]= t;
				}
		for (SinhVien S: ds)
			System.out.println("\t+"+S);
	}

}
