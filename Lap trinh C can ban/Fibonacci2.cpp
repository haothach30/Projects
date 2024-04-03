#include <stdio.h>
int main()
{
    int count, t1 = 0, t2 = 1, t3, i;
    //first_term = t1, second_term = t2, next_term = t3

    scanf("%d", &count);
    if (count==2)
    printf("0, 1");
    else {
    for ( i = 0 ; i < count-1 ; i++ )
    {
       if ( i <= 1 )
          t3 = i;
       else
       {
          t3 = t1 + t2;
          t1 = t2;
          t2 = t3;
       }
       printf("%d, ", t3);
       
    }
    printf("%d", t3+t1);
}
return 0;
}
