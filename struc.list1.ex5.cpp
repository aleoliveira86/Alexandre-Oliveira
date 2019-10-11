/* EXERCICIO 5. Crie uma estrutura representando os alunos do curso de Introdução a Programação de
Computadores. A estrutura deve conter a matrícula do aluno, nome, nota da primeira
prova e nota da segunda prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior media geral.
d) Encontre o aluno com menor media geral.
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
valor 6,0 para aprovação. */

#include <stdio.h>

struct aluno{
	
	int matricula=0;
	char nome[20];
	float nota1=0;
	float nota2=0;
};

main(){
	
	int i;
	float maiornota=0.0, maiormedia=0.0, menormedia=0.0, soma=0.0;
	int nCasos = 2;
	aluno aluno[nCasos];
	
	printf("Digite o numero de matricula do aluno[%d]",i);
	scanf("%d", &aluno[i].matricula);
	printf("Digite o nome do aluno[%d]",i);
	fflush(stdin);
	gets(aluno[i].nome);
	printf("Digite a 1a nota do aluno[%d]",i);
	scanf("%f", &nota1);
	printf("Digite a 2a nota do aluno[%d]",i);
	scanf("%f", &nota2);
	
}

