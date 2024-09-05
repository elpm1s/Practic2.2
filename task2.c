#include <stdio.h>
#include <locale.h>

void main()

{
	setlocale(LC_CTYPE, "RUS");
	int N, K, A, B;
	N = 17;
	K = 10;
	printf("%s%d%s%d%s", "Сейчас ", N, " часов ", K, " минут");
	printf("\n%s%d%s%s", "Идёт ", K, " минута", " суток");
	printf("\n%s%s%d%s%d%s", "До ", "полунчи ", 23 - N, " часов ", 60 - K, " минут");
	printf("\n%s%d%s", "С 8:00 прошло ", (N - 8) * 60 * 60 + K * 60, " секунд");
	printf("\n%s%10.3g%s%10.3g%s", "Текущий час =  ", N / 24., " суток и текущая минута = ", K / 60., " часа");






}