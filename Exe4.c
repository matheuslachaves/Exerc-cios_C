#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int kmi, kmf, litros;
	float litrosaoscem;
	printf("Diz a quilometragem no início da viagem\n");
	scanf_s("%d", &kmi);
	printf("Diz a quilometragem no fim da viagem\n");
	scanf_s("%d", &kmf);
	printf("Diz a quilometragem no fim da viagem\n");
	scanf_s("%d", &litros);
	litrosaoscem = litros * 100 * (kmf - kmi);
	printf("Os litros aos cem são %.2f\n", litrosaoscem);
	return 0;
}