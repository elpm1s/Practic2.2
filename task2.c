#include <stdio.h>
#include <locale.h>

void main()

{
	setlocale(LC_CTYPE, "RUS");
	int N, K, A, B;
	N = 17;
	K = 10;
	printf("%s%d%s%d%s", "������ ", N, " ����� ", K, " �����");
	printf("\n%s%d%s%s", "��� ", K, " ������", " �����");
	printf("\n%s%s%d%s%d%s", "�� ", "������� ", 23 - N, " ����� ", 60 - K, " �����");
	printf("\n%s%d%s", "� 8:00 ������ ", (N - 8) * 60 * 60 + K * 60, " ������");
	printf("\n%s%10.3g%s%10.3g%s", "������� ��� =  ", N / 24., " ����� � ������� ������ = ", K / 60., " ����");






}