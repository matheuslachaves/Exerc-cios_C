#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	return 0;
}
