#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	char* nomes[5] = { "Matheus","Maria","Madalena","João","ClaraBatata" };
	int i;
	for(i = 4; i >= 0; i--)
	{
		printf("o %dº é %s\n", i + 1, nomes[i]);
	}
	return 0;
}