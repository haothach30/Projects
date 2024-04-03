#include "stdio.h"
#include "conio.h"
 
void main()
{
    int angle, k;
    do
    {
        printf("\n Nhap vao so do goc (0 <= x <= 360*k) = ");
        scanf("%d", &angle);
    }while(angle < 0);
 
    k = angle / 360;
 
    if(angle >= (360*k) && angle < (90 + 360*k))
        printf("\n %d o goc phan tu thu I", angle);
    else if (angle >= (90 + 360*k) && angle < (180 + 360*k))
        printf("\n %d o goc phan tu thu 2", angle);
    else if (angle >= (180 + 360*k) && angle < (270 + 360*k))
        printf("\n %d o goc phan tu thu 3", angle);
    else if (angle >= (270 + 360*k) && angle <= 360*(k + 1))
        printf("\n %d o goc phan tu thu 4", angle);
    else
        printf("\n %d khong hop le");
    getch();
}
