#include <stdio.h> 
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Hello Word!");
	getchar();
	puts("Hello Word!");
	return 1024;
}
