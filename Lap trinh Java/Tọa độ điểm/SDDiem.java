package buoi03;

public class SDDiem {

	public static void main(String[] args) {
		Diem a= new Diem();
		Diem b= new Diem(6, 1);
		Diem c= new Diem(b);
		Diem d= b;
		
		//b.in("Toa do b: ");
		//System.out.println("Toa do b: ");	b.in();
		//System.out.println("Toa do diem b: " +b.toString());
		System.out.println("Toa do diem B: " +b);
		
		System.out.println("Nhap vao toa so diem A: ");
		a.nhap();
		System.out.println("Toa do diem A: " +a);
	}
}
