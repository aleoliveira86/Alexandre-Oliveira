// EXERCICIO 3. Fazer um programa com uma estrutura �livro�, que cont�m os elementos t�tulo, ano
//de edi��o, n�mero de p�ginas e pre�o. Criar uma vari�vel desta estrutura que � um
//vetor de 5 elementos. Ler os valores para a estrutura e imprimir a m�dia do n�mero de
//p�ginas dos livros. 

#include <stdio.h>

struct livro{
	char titulo[20];
	int edicao;
	int paginas;
	float preco;
	
};

main(){
	
	livro livro[5];
	
	int media=0, soma=0;
	int cont;
	
	for(cont=0; cont<5; cont++){
		
		printf("Digite o titulo do livro: ");
		fflush(stdin);
		gets(livro[cont].titulo);
		printf("\nDigite o ano da edicao do livro: ");
		scanf("%d", &livro[cont].edicao);
		printf("\nDigite a quantidade de paginas do livro: ");
		scanf("%d", &livro[cont].paginas);
		printf("\nDigite o preco do livro: ");
		scanf("%d", &livro[cont].preco);
		soma=soma+livro[cont].paginas;
	}
	printf("\n");
	
	media=soma/5;
	
		printf("\n\nA media do numero de paginas: %d\n", media);	
	
}
