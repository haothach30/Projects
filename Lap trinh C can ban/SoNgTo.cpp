#include <stdio.h>
int main() {
    int i = 2, j, so, kt;
 	scanf("%d", &so);
    while (i <= so) {
        kt = 1;
        if (i != 0 && i != 1) {
            j = 2;
            while(j <= i/2) {
                if(i%j == 0) {
                    kt = 0;
                    break;
                }
                j++;
            }
        } else {
           kt = 0;
        }
 
        if(kt == 1) {
            printf("%d ", i);
        }
         
       i++;
    }
    return 0;
}
