#include <stdio.h>
int main()
{
    float t1, t2, t3, Km;
    scanf("%f", &Km);
    t1=11500;
    t2=11500+(Km-0.5)*14500;
    t3=11500+(29.5*14500)+(Km-30)*11600;
    if (0.5<Km && Km <=30)
    	printf("%.2f km = %.2f VND", Km, t2);
    else if (Km<=0.5)
    	printf("%.2f km = %.2f VND", Km, t1);
    else 
    	printf("%.2f km = %.2f VND", Km, t3);
    
    return 0;
}
