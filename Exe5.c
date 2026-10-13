#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float nota;
	printf("Qual a nota do aluno?");
	scanf_s("%f", &nota); //ler a nota
	if (nota < 9.5) //verificar
	{
		printf("O aluno é burro =(");
	}
	else
	{
		printf("O aluno está aprovado!");
	}
	return 0;
}
