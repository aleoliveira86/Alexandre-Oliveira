#include<stdio.h>

main(){
	
	int num=0;
	float vetor[5], media,soma;
	
	for(num=0; num<5; num++){
		printf("Digite os valores: ");
		scanf("%f", &vetor[num]);
		soma = soma+vetor[num]; //ou pode-se usar soma += vetor[num];
	}
	
	
	
	media=soma/5;
	printf("\nO Media foi: %.2f", media); //ou usar direto tirando media printf("\nO Media foi: %.2f", (soma/5));
}

