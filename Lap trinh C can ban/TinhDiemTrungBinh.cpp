#include <stdio.h>
int main ()
{
    float a, b, c, d, e, Tb;
    scanf ("%f%f%f%f%f", &a,&b,&c,&d,&e);
    Tb=(a+b+c+d+e)/5;
    if (Tb>=4.0)
        printf("DAT");
    else printf("KHONG DAT");
    return 0;
    
}
