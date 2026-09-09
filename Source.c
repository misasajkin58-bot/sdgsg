#include <stdio.h> 
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("*******************************************\n");
	printf("*     ___     ___   ___     ___   ___     *\n");
	printf("*   |    |   |   | |   |   |   | |   |    *\n");
	printf("*   |    |   |   | |___|   |   | |___|    *\n");
	printf("*   |    |   |   |     |   |   | |   |    *\n");
	printf("*   |    | . |___|  ___| . |___| |___|    *\n");
	printf("*******************************************\n");

	return 0;
}