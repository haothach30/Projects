#include <stdio.h>
int main () {
int n, i, d=0;
int a[20];

scanf("%d", &n);
 for (i=0; i<n; i++) {
     scanf("%d", &a[i]);
 }
 for(i=0; i<n; i++) {
 printf("%d ", a[i]); }
 
 for(i=0; i<n; i++){
     if(a[i]%2!=0) d++;
 }
 printf("\n%d\n", d);
 
 for(i=0; i<n; i++) {
 	if(a[i]%2!=0)
     printf("%d ", a[i]);}
     
 return 0;
}
