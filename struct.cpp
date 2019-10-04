#include <stdio.h>

struct funcionario{
	char nome[50];
	float salario;
	char cargo[50];
	};
	
main(){
	

	funcionario f, f2;
	printf("Nome: ");
	fflush(stdin);
	gets(f.nome);
	printf("\n Salario: ");
	scanf("%f", &f.salario);
	printf("\nCargo: ");
	fflush(stdin);
	gets(f.cargo);
	
	printf("Nome: ");
	fflush(stdin);
	gets(f2.nome);
	printf("\n Salario: ");
	scanf("%f", &f2.salario);
	printf("\nCargo: ");
	fflush(stdin);
	gets(f2.cargo);
	
	printf("\n\n%s - r$%2.f - %s", f.nome, f.salario, f.cargo);
	printf("\n\n%s - r$%2.f - %s", f2.nome, f2.salario, f2.cargo);
}
