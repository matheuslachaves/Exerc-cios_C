#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int n1;
	printf("Me dê um número para CountDown!\n");
	scanf_s("%d", &n1);
	for(n1; n1 >= 0; n1--)
	{
		printf("%d\n", n1);
	}
	return 0;
}