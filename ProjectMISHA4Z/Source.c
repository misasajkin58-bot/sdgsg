#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


void name()
{
	setlocale(LC_CTYPE, "RUS");
	printf("******************************\n");
	printf("*Тема: Разработка консольного*\n");
	printf("*    приложения              *\n");
	printf("*Группа: БТИИ-261            *\n");
	printf("* Студент Сайкин М.С         *\n");
	printf("******************************\n");

	return 0;
}

void date()
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
int main()
{
	name();
	date();
	setlocale(LC_CTYPE, "RUS");
}