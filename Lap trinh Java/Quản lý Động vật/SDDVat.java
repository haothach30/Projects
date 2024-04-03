package Buoi04;

import java.util.Scanner;

public class SDDVat {

	public static void main(String[] args) {
		DVat a;

		//a= new Bo();
		//a.nhap();
		//a.in();
		//a.keu();
		
		//a= new Meo();
		//a.nhap();
		//a.in();
		//a.keu();
		
		DVat ds[];
		Scanner sc= new Scanner(System.in);
		System.out.println("Nhap so dong vat can nuoi! ");
		int n= sc.nextInt();
		ds= new DVat[n];
		int c;
		for(int i=0; i<n; i++) {
			System.out.println("Nhap con vat thu "+(i+1)+":");
			System.out.println("Ban chon nhap con Bo(0), hay con Meo(1): ");
			c= sc.nextInt();
			if(c==0) ds[i]= new Bo();
			else 	 ds[i]= new Meo();   
			ds[i].nhap();
		}
		for(int i=0; i<n; i++) {
			System.out.print((i+1) +"-" +ds[i]+"\t");
			//ds[i].in();
			ds[i].keu();
		}
		
		System.out.println("-So dong vat la: " +Bo.laycount()); //???phai la static ben laycount()
																  //cong them 2 con nhap o tren nua
		System.out.println("-So dong vat la: " +Meo.laycount() );
		
	}
	

}