/*#include <stdio.h>
 
int main() 
{
    // khai bao chuoi co toi da 50 ky tu
    char name[50]; 
    printf("Hi, What is your name? \nMy name is: ");
    gets(name);
    printf("Hi %s, welcome to C language\n", name);
 
    // khoi tao chuoi ngay khi khai bao
    char myLove[] = "Nguyen Thi Lap Lanh";
    puts(myLove);
 
    return 0;
} */

/*#include <stdio.h>
#include <string.h> 
int main() 
{
    char s[50];
    printf("Enter a string: ");
    gets(s);
 
    int i, count = 0; // count - bien dem so luong dau cach
    for (i = 0; i < strlen(s); i++ )
    {
        if(s[i] == ' ') 
        {
            count++;
        }
    }
 
    printf("Number word in string is: %d\n", count + 1 );
    return 0;
} */

/*#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50];
    printf("Enter a string: ");
    gets(s);
 
    // delete all space at start of string
    while( s[0] == ' ' ) strcpy(&s[0], &s[1]);
 
    // delete all space at end of string
    while( s[ strlen(s)-1 ] == ' ') s[ strlen(s)-1 ] = '\0';
 
    // delete all space between two word 
 
    int i;
    for(i = 0; i < strlen(s); i++)
    {
        if( s[i] == ' ' && s[i+1] == ' ')
        {
            strcpy(&s[i], &s[i+1]);
            i--; // why???
        }
    }
 
    printf("s=%s.\n", s);
 
    return 0;
} */

/*
//TINH DO DAI KHONG DUNG HAM
#include <stdio.h>
int length(char str[]){
    int i = 0;
 
    for(; str[i]; i++); // for(int i = 0; str[i] != '\0'; i++){}
    // same as
    return i;
}
 
int main(){
    char str[100];
    printf("\nNhap chuoi: ");
    gets(str);
 
    printf("Length = %d", length(str));
}
*/
#include <stdio.h>
#include <string.h>
void to_title(char str[]){
	
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        if (str[i - 1] == ' ' || i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
  
}
int main (){
	char s[100];
	gets(s);
    to_title(s);
    printf("%s", s);
    return 0;
	
}
