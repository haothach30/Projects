package Buoi03;

import java.util.Scanner;

public class Date {
private int d, m, y;
	
	public Date(){
		d=1;
		m=1;
		y=2023;
	}
	
	@Override
	public String toString() {
		return d+"/"+m+"/"+y;
	}

	public Date (int d1, int m1, int y1){
		d= d1;
		m= m1;
		y= y1;
	}
	
	public void nhap(){
		Scanner sc= new Scanner(System.in);
		do{
			System.out.println("Nhap vao ngay: "); d= sc.nextInt();
			System.out.println("Nhap vao thang: "); m= sc.nextInt();
			System.out.println("Nhap vao nam: "); y= sc.nextInt();
			
		}while(!hopLe());
	}
	
	public boolean hopLe(){
		int Max[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
		if(y%4 == 0 && y%100 != 0)
			Max[2]= 29;
		boolean h= false;
		if(y>0 && m>0 && m<13 && d>0 && d<= Max[m])
			h= true;
		return h;
	}
	
	public void in(){
		System.out.println(d+"/"+m+"/"+y);
	}
	
	public Date cong(){
		Date n= new Date(d, m, y);
		n.d++;
		if(!n.hopLe()){
			n.d= 1;
			n.m++;
			if(!n.hopLe()){
				n.m= 1;
				n.y++;
			}
		}
		return  n;
	}
	
	public Date cong (int K){
		Date n= new Date(d, m, y);
		for (int i=1; i<=K; i++)
			n= n.cong();
		return n;
	}
	
	public Date(Date a) {
		d= a.d;
		m= a.m;
		y= a.y;
	}
	
}
