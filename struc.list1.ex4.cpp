// EXERCICIO 4. Crie um programa que permita armazenar o nome, a altura e da data de nascimento
//de 10 pessoas. Cada pessoa deve ser representada por uma struct dentro de um vetor.
// O campo data de nascimento também deve ser uma struct. 

#include <stdio.h>

struct datanascimento{
	int dia, mes , ano;
};

struct pessoa{
	
	char nome [20];
	float altura;
	datanascimento datanascimento;
};

main(){
	
	int nCasos=10;
	pessoa pessoa[nCasos];
	int i;
	
	for(i=0; i<nCasos; i++){
		printf("Digite o nome da pessoa[%d]: ", i);
		fflush(stdin);
		gets(pessoa[i].nome);
		printf("Digite a altura da pessoa[%d]: ", i);
		scanf("%f", &pessoa[i].altura);
		printf("Digite dia, mes e ano da pessoa [%d]: ", i);
		scanf("%d", &pessoa[i].datanascimento.dia);
		scanf("%d", &pessoa[i].datanascimento.mes);
		scanf("%d", &pessoa[i].datanascimento.ano);
	}
	
	for(i=0; i<nCasos; i++){
		printf("\n pessoa [%d], nome: %s, altura: %.2f, data de nascimento: %d/%d/%d \n", i, pessoa[i].nome,pessoa[i].altura,pessoa[i].datanascimento.dia,pessoa[i].datanascimento.mes,pessoa[i].datanascimento.ano);
	}
}
