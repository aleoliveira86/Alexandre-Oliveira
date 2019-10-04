//criar uma struct aluno com os campos:
//nome, nota1, nota2 
//declarar uma variavel do tipo aluino ler os dados e exibir a media do aluno

#include <stdio.h>

struct aluno{
		char nome[50];
		float nota1;
		float nota2;
		
};

main(){
	float media;
	
	aluno a;
	printf("Nome do aluno: ");
	fflush(stdin);
	gets(a.nome);
	printf("\nDigite a 1a nota do Aluno: ");
	scanf("%f", &a.nota1);
	printf("\nDigite a 2a nota do Aluno: ");
	scanf("%f", &a.nota2);
	
	
	media=(a.nota1+a.nota2)/2;
	
	printf("\n\n%s - %.2f - %.2f - media: %.2f", a.nome,a.nota1,a.nota2,media);
}
