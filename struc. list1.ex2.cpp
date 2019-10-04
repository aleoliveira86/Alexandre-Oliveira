//EX 2 Foi realizada uma pesquisa entre 500 habitantes de certa região. De cada habitante
//foram coletados os dados: idade, sexo, salário e número de filhos. Crie a estrutura de
//dados adequada para armazenar e exibir estas informações. 

#include <stdio.h>

struct pessoa{
	
	int idade;
	char sexo[1];
	float salario;
	int filhos;
};

main(){
	
	pessoa p[3];
	int i;
	
	
	for(i=0; i<3; i++){
		printf("\nInforme sua idade: ");
		scanf("%d", &p[i].idade);
		printf("\nDigite o sexo: M para Masculino ou F para feminino: ");
		fflush(stdin);
		gets(p[i].sexo);
		printf("\nInforme seu salario: ");
		scanf("%f", &p[i].salario);
		printf("\nInforma a quantidade de filhos: ");
		scanf("%d", &p[i].filhos);	
	}
	
	printf("\nDados coletados\n");
	
	for(i=0; i<3; i++){		
		printf("\n%d - %s - %.2f - %d\n", p[i].idade, p[i].sexo, p[i].salario, p[i].filhos);		
	}
}

