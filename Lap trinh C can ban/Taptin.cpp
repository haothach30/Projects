#include <stdio.h>
int main () {
FILE *f;
f=fopen("C:\\SH 2,3.txt", "r+");

if (f!=NULL)
{
	fputs("Bao gio lay chong\n", f);
	fputs("Khi nao em du tuoi a!", f);
	fclose (f);
	}	
	return 0;
}
