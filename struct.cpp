struct funcionario{
	char nome[50];
	float salario;
	char cargo[50];
	};
	
main(){

	funcionario f, f2;
	printf("Nome: ");
	gets(f.nome);
	printf("\n Salario: ");
	scanf("%f", &f.salario);
	printf("\nCargo: ");
	fflush(stdin);
	gets(f.cargo);
	
	printf("\n\n%s - r$%2.f - %s", f.nome, f.salario, f.cargo);
	printf("\n\n%s - r$%2.f - %s", f2.nome, f2.salario, f2.cargo);
}
