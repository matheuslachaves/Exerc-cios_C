#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "");
	int cont=0, soma=0, N;
	float media;
	do{
		printf("ME DÁ AGORA um número >.<\n");
		scanf_s("%d", &N);
		cont = cont + 1;
		soma = soma + N;
	} while (soma <= 1000);
	media = soma / cont;
	printf(" A média é %.1f e vc somou %i vezes! e a soma deu %i \n", media, cont, soma);
	return 0;
}