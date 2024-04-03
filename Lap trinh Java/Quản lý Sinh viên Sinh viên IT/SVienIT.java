package Buoi04;

import java.util.Scanner;

import Buoi03.SinhVien;

public class SVienIT extends SinhVien{
	
	private String user, pass, mail; 	 //them 3 thuoc tinh moi
	
	public SVienIT() {
		super();						//ham super cho ham SinhVien.Buoi03
		user= new String();
		pass= new String();
		mail= new String();
	}
	
	public SVienIT(SVienIT d) {
		super(d);
		user= new String(d.user);
		pass= new String(d.pass);
		mail= new String(d.mail);
	}
	
	public void nhap() {
		super.nhap();
		Scanner sc= new Scanner(System.in);
		System.out.print("Nhap vao User: "); user= sc.nextLine();
		System.out.print("Nhap vao Pass: "); pass= sc.nextLine(); 
		System.out.print("Nhap vao Email:  "); mail= sc.nextLine();
	}
	
	public void in() {
		System.out.println("User: "+user +", Mail: "+mail);
	}
	
	public String toString() {
		return super.toString() + "User: "+user +", Mail: "+mail;
	}
	
	public String layUser() {
		return user;
	}
	
	public String layMail() {
		return mail;
	}
	
	public void doiPass(String newpass) {
		pass= new String(newpass);
	}

}
