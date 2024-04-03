#include <conio.h>
#include <stdio.h>

main()
{
  

 int n;
 float plus,s;
 scanf("%f",&s);
 
 plus=1;
 n=2;

 while (plus<=s)
    {
  plus=plus+float((float(1)/n));
  n+=1;
 }

 printf("%d", n-1);

 return 0;
}
