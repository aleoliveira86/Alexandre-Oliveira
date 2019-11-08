//3. Faça um procedimento que recebe a idade de um nadador por parâmetro e exiba a
//categoria desse nadador de acordo com a tabela abaixo


#include <stdio.h>

void nadador(int n){
	
	if(n>=5 && n<=7){
		printf("Categoria: Infantil A");
	} 
	else if(n>=8 && n<=10){
		printf("Categoria: Infantil B");
	} else if(n>=11 && n<=13){
		printf("Categoria: Juvenil A");
	} else if(n>=14 && n<=17){
		printf("Categoria: Juvenil B");
	} else if(n>=18 && n<=140){
		printf("Categoria: Adulto");
	} else{
		printf("Idade Invalida");
	}
	
}

main(){
	
	int n;
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &n);
	nadador(n);
}
