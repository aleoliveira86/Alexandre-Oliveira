#include<stdio.h>
#include<locale.h>


main(){
	
	int i;
	float v[6];
	float media=0.0,maior=0.0,menor=0.0,soma=0.0;
	
	for (i=0; i<6; i++){
		printf("\nDigite vetor[%d]: ", i);
		scanf("%f", &v[i]);
		soma=soma+v[i];		     
	}
	media=soma/6.0;
	printf("\n Media dos valores = %.2f", media);	
	
	maior=v[0];
	menor=v[0];
	
	for (i=0; i<6; i++){
		if(v[i]>maior){
			maior=v[i];
		} else if (v[i]<menor){
			menor=v[i];
		}		
	}
	printf("\n Menor valor: %.2f", menor);
	printf("\n Maior valor: %.2f", maior);
}

