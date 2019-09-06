#include <stdio.h>
#include<stdlib.h>
#include<time.h>


main(){

	int x;
	srand(time(NULL)); //gera numeros aleatorios pela hora do relogio
	for(x=0; x<30; x++) //30 numeros criados aleatorios
		printf("%d ", rand()%10+1); // numeros criados serão divididos por 10
									// então será até 9 + 1 = 10 e 0 + 1 = 1
									// serão numeros iniciados em 1 ate 10.
}

