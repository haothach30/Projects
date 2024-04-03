#include <stdio.h>
int main(){
 //khai bao
 int a, b;     //chi so cu va chi so moi
 float x, n;   //x=so Kmh dien, n=so tien
 int bac1=1549, bac2=1600, bac3=1858, bac4=2340, bac5=2615, bac6=2701;
 
 //nhan du lieu
 scanf("%d%d", &a, &b);
 
 //tinh toan
 x=b-a;
 if(x<0){
 printf("\nVui long nhap lai So Dien\nSo dien khong duoc nho hon 0\n");
 } 
 else if(x<=50){
  n=x*bac1;
  printf("\n%.0f Kwh: %.0f VND", x, n);
 }else if(x<=100){
  n=50*bac1+((x-50)*bac2);
  printf("\n%.0f Kwh: %.0f VND", x, n);
 }else if(x<=200){
  n=50*bac1+(50*bac2)+((x-100)*bac3);
  printf("\n%.0f Kwh: %.0f VND", x, n);
 }else if(x<=300){
  n=50*bac1+(50*bac2)+(100*bac3)+((x-200)*bac4);
  printf("\n%.0f Kwh: %.0f VND", x, n);
 }else if(x<=400){
  n=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+((x-300)*bac5);
  printf("\n%.0f Kwh: %.0f VND", x, n);
 }else if(x>400){
  n=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+(100*bac5)+((x-400)*bac6);
  printf("\n%.0f Kwh: %.0f VND", x, n);
}
  return 0;
 }
 
