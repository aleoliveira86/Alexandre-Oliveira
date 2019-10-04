//criar uma struct aluno com os campos:
//nome, nota1, nota2 
//declarar uma variavel do tipo 2 alunos e exibir o nome daquele que obteve a maior media

#include <stdio.h>

struct aluno{
		char nome[50];
		float nota1;
		float nota2;
		
};

main(){
	float media1, media2;
	
	aluno a1, a2;
	printf("Nome do aluno: ");
	fflush(stdin);
	gets(a1.nome);
	printf("\nDigite a 1a nota do Aluno: ");
	scanf("%f", &a1.nota1);
	printf("\nDigite a 2a nota do Aluno: ");
	scanf("%f", &a1.nota2);
	
	printf("\nNome do aluno: ");
	fflush(stdin);
	gets(a2.nome);
	printf("\nDigite a 1a nota do Aluno: ");
	scanf("%f", &a2.nota1);
	printf("\nDigite a 2a nota do Aluno: ");
	scanf("%f", &a2.nota2);
	
	
	media1=(a1.nota1+a1.nota2)/2;
	media2=(a2.nota1+a2.nota2)/2;
	
	if(media1>media2){
		printf("\n\nMaior media: %s", a1.nome);
	} else if(media2>media1){
		printf("\n\nMaior media: %s", a2.nome);
	}else{
		printf("\n\nMedias foram iguais");
	}	
}
