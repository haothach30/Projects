#include <stdio.h>
int main ()
{
    int number1 = 1;
    int number2, i, j, flag_var;
    scanf("%d", &number2);
    for (i=number1 + 1; i<number2; ++i)
    {
        flag_var=0;
        for (j=2; j<=1/2; ++j)
        {
            if(i%j==0)
            {
                flag_var=1;
                break;
            }
        }
        if(flag_var==0)
            printf("%d ", i);
    }
    return 0;
}
