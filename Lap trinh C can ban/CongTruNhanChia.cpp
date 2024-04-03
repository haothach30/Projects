#include <stdio.h>
int main (){
int a, b;
float c, d;
printf("a, b:");
scanf("%d%d", &a, &b);
printf("c, d");
scanf("%f%f", &c, &d);
printf ("6 + a / 5 * b = %i\n", d + a / c * b);
printf ("a / b * b = %i\n", a / b * b);
printf ("c / d * d = %.1f\n", c / d * d);
printf ("-a = %i\n", -a);
return 0;
}
