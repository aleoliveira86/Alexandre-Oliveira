//EX 1 Defina uma estrutura que ir� representar UMA banda de m�sica. Essa estrutura deve
//ter o: nome da banda, que tipo de m�sica ela toca, o n�mero de integrantes e o valor
//do show que a banda cobra. Preencher os dados e exibi-los na tela. 

#include <stdio.h>

struct banda{
	
	char nome[50];
	char musica[20];
	int integrantes;
	int valor;
};

main(){
	
	banda y;
	
	printf("Nome da banda: ");
	fflush(stdin);
	gets(y.nome);
	printf("Tipo de musica que a banda toca: ");
	fflush(stdin);
	gets(y.musica);
	printf("Quantos integrantes a banda possui: ");
	scanf("%d", &y.integrantes);
	printf("Valor do cache da banda: ");
	scanf("%d", &y.valor);
	
	printf("\nNome da Banda: %s \nEstilo musical: %s \nQuantidade de integrantes: %d \nValor cobrado: %d ", y.nome,y.musica,y.integrantes,y.valor);
	
}

