package Buoi03;

public class DThang {
	public Diem d1, d2;
	public DThang() {
		d1= new Diem();
		d2= new Diem();
	}
	
	public DThang(Diem d1a, Diem d2a) {	//ham doi so
		d1= new Diem(d1a);
		d2= new Diem(d2a);
	}
	
	public DThang(DThang dt) {		//ham xd sao chep
		d1= new Diem(dt.d1);
		d2= new Diem(dt.d2);
	}
	
	public void nhap() {
		System.out.println("Toa do d1: ");		d1.nhap();	//diem.nhap();
		System.out.println("Toa do d2: ");		d2.nhap();
	}
	
	public void in() {
		System.out.println("["+d1+ ";" +d2+"]");
	}

	@Override
	public String toString() {
		return "DThang [" + d1 + "," + d2 + "]";
	}
	
	public void ttien(int dx, int dy) {
		d1.ttien(dx, dy);
		d2.ttien(dx, dy);
	}
	
	public float doDai() {
		return d1.kCach(d2);
	}
}
