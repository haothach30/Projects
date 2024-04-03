#include <stdio.h>
#include <string.h>
// viet hoa ki tu dau tien 

void to_title(char str[]){
	
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
			str[i] += 32;
        if (str[i - 1] == ' ' || i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
    }
  
}
int main (){
	char s[50];
	fgets(s, 50, stdin);

    to_title(s);
    printf("%s", s);
    return 0;
	
}
