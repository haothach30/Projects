package Buoi05;

import java.util.Scanner;

import Buoi03.SinhVien;
import Buoi04.SVienIT;

public class SDHoaDon {

	public static void main(String[] args) {
		//HoaDon h= new HoaDon();
		//h.nhap();
		//h.in();
		
		
		//danh sách các hóa đơn
		HoaDon ds[];
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap so hoa don can quan li: ");
		int n= sc.nextInt();
		ds= new HoaDon[n];
	
		for(int i=0; i<n; i++) {
			System.out.println("Nhap hoa don thu: " +(i+1) );
			ds[i]= new HoaDon();
			ds[i].nhap();
		}
		
		for(int i=0; i<n; i++) {
			ds[i].in();
		}
		
	}	
}

