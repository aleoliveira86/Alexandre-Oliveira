#include <stdio.h>

struct pessoa{
	char nome[50];
	char endereco[50];
};

main(){
	pessoa p[5];
	int cont;
	
	for(cont=0; cont<5; cont++){
		printf("\nNome: ");
		gets(p[cont].nome);
		printf("\nEndereco: ");
		gets(p[cont].endereco);
	}
	
	printf("\n\nDados Informados \n\n");
	for(cont=0; cont<5; cont++){
		printf("%s - %s \n", p[cont].nome,p[cont].endereco);
	}
}

