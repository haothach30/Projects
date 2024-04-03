package Buoi03;

import java.util.Scanner;

public class SDGach {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int n;
		
		System.out.println("Nhap vao so loai gach: ");
		n= sc.nextInt();
		
		Gach gach[]= new Gach[n];
		for(int i=0; i<n; i++) {
			gach[i]= new Gach();
			System.out.println("Nhap vao thong tin loai gach: " +(i+1)+": ");
			gach[i].nhap();
		}
		
		for(int i=0; i<n; i++) {
			System.out.println("Thong tin loai gach thu " +(i+1)+": ");
			gach[i].in();
		}
		
		Gach g= gach[0];
		long min_cp= (long)gach[0].getGiaban() / gach[0].dienTichToiDa();
		for(int i=0; i<n; i++) {
			if((double)gach[i].getGiaban() / gach[i].dienTichToiDa() < min_cp) {
				min_cp= (long)gach[i].getGiaban() / gach[i].dienTichToiDa();
				g= gach[i];
			}
		}
		System.out.println("Loai gach co chi phi lot thap nhat: ");
		g.in();
		
		for(int i=0; i<n; i++) {
			long cp= gach[i].soLuongHop(2000, 500) * gach[i].getGiaban();
			System.out.println("Chi phi lot cua loai gach thu " +(i+1)+ " la: "+cp);
			
		}

	}

}
