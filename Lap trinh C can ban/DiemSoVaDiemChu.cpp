#include <stdio.h>
int main ()
{
    float a, b, c, d, e, Tb;
    scanf ("%f%f%f%f%f", &a,&b,&c,&d,&e);
    Tb=(a+b+c+d+e)/5;
    if (Tb>=9.0)
    	{
		printf("\nDiem so:%.1f",Tb);
    	printf("\nDiem chu: A");
        }
    else if(Tb>=8.0 && Tb<9.0)
    	{
    	printf("\nDiem so:%.1f",Tb);
    	printf("\nDiem chu: B+");	
		}
	else if(Tb>=7.0 && Tb<8.0)
    	{
    	printf("\nDiem so:%.1f",Tb);
    	printf("\nDiem chu: B");	
		}
	else if(Tb>=6.0 && Tb<7.0)
    	{
    	printf("\nDiem so:%f",Tb);
    	printf("\nDiem chu: C+");	
		}
	else if(Tb>=5.0 && Tb<6.0)
    	{
    	printf("\nDiem so:%.1f",Tb);
    	printf("\nDiem chu: C");	
		}
	else if(Tb>=4.5 && Tb<5.0)
    	{
    	printf("\nDiem so:%.1f",Tb);
    	printf("\nDiem chu: D+");	
		}
	else if(Tb>=4.0 && Tb<4.5)
    	{
    	printf("\nDiem so:%.1f",Tb);
    	printf("\nDiem chu: D");	
		}
	else if(Tb<4.0)
    	{
    	printf("\nDiem so:%.1f",Tb);
    	printf("\nDiem chu: F");	
		}
	
	return 0;
}
