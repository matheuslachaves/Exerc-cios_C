#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int qual;
	char soun;
	char* carros[3] = { "Volvo", "Toyota", "Mitsubishi" };
	
	do {
		printf("diz sobre qual queres saber? (1 a 3)\n");
		scanf_s("%d", &qual);
		if (qual < 1 || qual > 3)
		{
			printf("escolha inválida!\n");
		}
		else
		{
			printf("%s\n", carros[qual - 1]);
		}
		printf("deseja continuar? (s/n)\n");
		scanf_s("%c", &soun);
		getchar();
	}while (soun != 'n' || soun != 'N');
	return 0;
}