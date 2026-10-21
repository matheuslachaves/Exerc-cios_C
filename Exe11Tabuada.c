#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "");
	int i, n;
	printf("Diz lá um número\a\n");
	scanf_s("%d", &n);
	for (i = 1; i < 11; i++){
		printf("%d x %d = %d\n", n, i, n * i);}
	return 0;}