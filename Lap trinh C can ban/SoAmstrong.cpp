#include<conio.h>
#include<math.h>
double tinh(long y)
{
    int q = 1, w;
    double tong = 0;
    long y1 = y;
    while(y1>10)
    {
        y1 = y1/10;
        q++;
    }
    while(y>0)
    {
        w = y%10;
        tong = tong + pow(w,q);
        y=y/10;
    }
    return tong;
}
void main()
{
    clrscr();
    for(long j = 1; j<=1000000;j++)
    {
        if(j==tinh(j))
            cout<<j<<", ";
    }
    getch();
} 
