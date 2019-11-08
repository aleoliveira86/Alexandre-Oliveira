//1. Crie um procedimento que receba por parâmetro dois valores reais (float) e execute a
//subtração do primeiro valor pelo segundo, em seguida exiba o resultado. 

#include <stdio.h>



void subtracao (float n1, float n2){
	float resultado;
	
	resultado = n1 - n2;
	printf(" \n A subtracao de %2.f - %2.f = %2.f",n1,n2, resultado);
    
}

main(){
	
	float n1,n2;
	
	
	printf(" \n Digite o valor do primeiro numero: ");
    scanf("%f", &n1);
    printf(" \n Digite o valor do segundo numero: ");
    scanf("%f", &n2);
    subtracao(n1,n2);    
  
}
