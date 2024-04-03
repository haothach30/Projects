#include<conio.h>
#include<stdio.h>
int main()
{
    int h, i;
    scanf("%d", &h);
    printf("##########");
    
    for(i = 3; i <= h; i++)    {
        {
            if( i == h)
			{
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("##########");
    }
    return 0;
}
