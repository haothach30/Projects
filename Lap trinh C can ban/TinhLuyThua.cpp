#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    float s = 1;
    while (b > 0) {
        
        s *= a;
        b--;
    }
    printf("%0.4f", s);
    
    return 0;
}
