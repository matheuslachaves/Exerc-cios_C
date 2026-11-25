#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int idade[30], altura[30], i, mediaheight=0, contmais13=0;
	for (i = 0; i < 3; i++) {
		printf("Qual altura (cm) e idade do aluno %d\n", i + 1);
		scanf_s("%d %d", &altura[i], &idade[i]);
	}
	for (i = 0; i < 3; i++) {
		mediaheight = altura[i] + mediaheight;	
	}
	mediaheight = mediaheight / 3;
	for (i = 0; i < 3; i++) {
		if (idade[i] >= 13 && altura[i]<mediaheight) {
				contmais13++;
		}
	}
	printf("%d alunos tinham mais de 13 anos mas estão abiaxo da média de altura :(", contmais13);

	return 0;
}