#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int vetor[10];
	int i, quantos = 0, soma = 0, opcao;
	printf("Digite 10 números inteiros:\n");
	for(i = 0; i < 10; i++)
	{
		printf("diz o %dº: ", i + 1);
		scanf_s("%d", &vetor[i]);
	}
	printf("Queres saber quantos ns negativos há ou a soma deles? (0 ou 1)\n");
	scanf_s("%d", &opcao);
	for(i = 0; i < 10; i++)
	{
		if(vetor[i] < 0)
		{
			quantos=quantos+1;
			soma= soma+vetor[i];
		}
	}
	if (opcao == 0)
	{
		printf("%d\n", quantos);
	}
	else if (opcao == 1)
	{
		printf("%d\n", soma);
	}
	else
	{
		printf("Opção inválida\n");
	}
	return 0;
}