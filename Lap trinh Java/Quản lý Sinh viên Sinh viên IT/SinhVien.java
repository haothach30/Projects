package Buoi03;

import java.util.Scanner;

public class SinhVien {
	private String mSo, hTen;
	private Date nSinh;			//tai dinh nghia lop Date 
	public char gtinh;
	private int n;
	private final int max= 40;		//gia tri Max la 40
	private String mon[], diem[];	//dung mang, do chung ta quan li tat ca 40 mon tuong ung voi cac diem 

public SinhVien() {					//ham sao chep khong doi so
	mSo= new String();
	hTen= new String();
	nSinh= new Date();
	gtinh= 'c';
	n= 0;
	mon= new String[max];
	diem= new String[max];
}

public SinhVien(SinhVien s) {		//ham sao chep co doi so
	mSo= new String(s.mSo);
	hTen= new String(s.hTen);
	nSinh= new Date(s.nSinh);
	gtinh= s.gtinh;
	n= s.n;
	mon= new String[max];
	diem= new String[max];
	for(int i=0; i<n; i++) {
		mon[i]= new String(s.mon[i]);
		diem[i]= new String(s.diem[i]);
	}
}

public void nhap() {
	Scanner sc= new Scanner(System.in);
	System.out.print("Nhap vao ma so sinh vien: ");	mSo= sc.nextLine();
	System.out.print("Nhap vao ho ten sinh vien: ");	hTen= sc.nextLine();
	System.out.println("Nhap vao nam sinh: "); 			nSinh.nhap();	//goi ham nhap tu lop Date
	System.out.print("Nhap vao gioi tinh (Nam: M - Nu: F): ");			gtinh= sc.nextLine().charAt(0);
}
	
public void nhapDiem() {
	Scanner sc= new Scanner(System.in);
	System.out.println("Nhap vao so mon: ");	n= sc.nextInt();
	sc.nextLine();
	for(int i=0; i<n; i++) {
		System.out.println("Nhap vao mon thu "  +(i+1)+ ":");
			mon[i]= sc.nextLine();
		System.out.println("Nhap vao diem " +mon[i]+ ":");
			diem[i]= sc.nextLine();
	}
}

public float diemTB() {
	float t= 0.0f;
	for(int i=0; i<n; i++) {					//khong dung duyet qua tat ca cac sinh vien do chung ta chi nhap vai diem
		if(diem[i].equals("A"))
			t+= 4.0f;
		else if(diem[i].equals("B+"))
			t+=3.5f;
		else if(diem[i].equals("B"))
			t+=3.0f;
		else if(diem[i].equals("C+"))
			t+=2.5f;
		else if(diem[i].equals("C"))
			t+=2.0f;
		else if(diem[i].equals("D+"))
			t+=1.5f;
		else if(diem[i].equals("D"))
			t+=1.0f;
	}
	return t/ n;
}

public void Them(String m, String d) {
	if(n< max) {
		mon[n]= new String(m);
		diem[n]= new String(d);
		n++;
	}else 
		System.out.println("Loi! Do mang day! ");
}

public void Xoa(String m) {
	int i= 0; 
	for(i= 0; i<n; i++) 
		if(mon[i].equals(m)) 
			break;
	if(i< n) {	
		for(int j=0; j<n-1; j++) {
			mon[j]= mon[j+1];
			diem[j]= diem[j+1];
			}
			n--;
		}
}

public String[] getDiem() {
	return diem;
}

public String layMSo() {
	return mSo;
}

public String layHTen() {
	return hTen;
}

public String layEmail() {
	return " ";
}

public String layUser() {
	return " ";
}
public String layTen() {				//de sap xep theo thu tu ten
	return hTen.substring(hTen.lastIndexOf(" ") + 1);
}


public void in() {
	System.out.print(mSo+ ", " +hTen+ ", " +nSinh+ ", ");
	if(gtinh == 'M') 
		System.out.print("Gioi tinh: Nam");
	else 
		System.out.print("Gioi tinh: Nu");
	for(int i=0; i<n; i++) {
		System.out.print(", " +mon[i]+ ", " +diem[i]);
	}
}

public String toString() {
	String S= (mSo+ ", " +hTen+ ", " +nSinh+ ", ");
	if(gtinh == 'M') 
		S+= "Gioi tinh: Nam";
	else 
		S+= "Gioi tinh: Nu";
	for(int i=0; i<n; i++) {
		S+= (", " +mon[i]+ ": " +diem[i]);
		}
	return S;
	}
}
