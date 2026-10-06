#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


void name()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	printf("******************************\n");
	printf("*Òåìà: Ðàçðàáîòêà êîíñîëüíîãî*\n");
	printf("*    ïðèëîæåíèÿ              *\n");
	printf("*Ãðóïïà: ÁÒÈÈ-261            *\n");
	printf("* Ñòóäåíò Ñàéêèí Ì.Ñ         *\n");
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
