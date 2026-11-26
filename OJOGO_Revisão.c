#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int pontos = 0, caixamisteriosa;
	char escolha;
	caixamisteriosa = rand() % 6 + 1;
	printf("Tens 0 pontos! Encontraste uma caixa misteriosa! Bora abrir (A para continuar)\n");
	scanf_s(" %c", &escolha);
	if (escolha == 'A' || escolha == 'a')
	{
		do {
			switch (caixamisteriosa)
			{
			case 1:
				pontos += 100;
				printf("Parabéns! Ganhaste MODEDAS (+100 pontos)! Agora tens %d pontos!\n", pontos);
				break;
			case 2:
				pontos += 200;
				printf("Parabéns! Ganhaste DIAMANTES (+200 pontos)! Agora tens %d pontos!\n", pontos);
				break;
			case 3:
				pontos += 50;
				printf("Parabéns! Ganhaste POÇÃO MÁGICA (+50 pontos)! Agora tens %d pontos!\n", pontos);
				break;
			case 4:
				pontos -= 50;
				printf("Oh não! Era uma ARMADILHA (-50 pontos)! Agora tens %d pontos!\n", pontos);
				break;
			case 5:
				pontos -= 100;
				printf("Oh não! Era um MONSTRO (-100 pontos)! Agora tens %d pontos!\n", pontos);
				break;
			case 6:
				printf("Oh não! A caixa estava vazia! Agora tens %d pontos!\n", pontos);
				break;
			}
			printf("Queres a abrir a caixa misteriosa ou sair? (A para abrir, S para sair)\n");
			scanf_s(" %c", &escolha);
			caixamisteriosa = rand() % 6 + 1;
		} while (escolha == 'A' || escolha == 'a');

	}
	printf("Saíste do jogo com %d pontos!\n", pontos);

	return 0;
}