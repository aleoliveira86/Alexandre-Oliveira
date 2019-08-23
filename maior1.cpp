#include<stdio.h>

main(){
	
	int num=0;
	float vetor[5], max=0;
	
	for(num=0; num<5; num++){
		printf("Digite os valores: ");
		scanf("%f", &vetor[num]);
	}
	
	max=vetor[0];
	
	for(num=1; num<5; num++){
		if(vetor[num]>max){
		max=vetor[num];
		}
		
		
	}
	printf("\nO maior valor informado foi: %.2f", max);
}
