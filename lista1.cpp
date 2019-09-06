#include<stdio.h>

void exercicio1(void){
	int i;
	printf("Digite um numero inteiro:");
	scanf("%d",&i);
	printf("Anterior: %d \n",(i-1));
	printf("Posterior: %d",(i+1));
}

void exercicio2(void){
	float i;
	printf("Digite uma medida em polegadas:");
	scanf("%f",&i);
	printf("cm: %f \n",(i*2.54f));
}

void exercicio3(void){
	float i;
	printf("Digite o salario:");
	scanf("%f",&i);
	float gratificacao = (i*0.05f);
	float desconto = (i+gratificacao)*(-0.07f);
	float final = i+gratificacao+desconto;
	printf("Gratificacao: %f \n",gratificacao);
	printf("Desconto: %f \n",((i*1.05f)*(-0.07f)));
	printf("Se fudeu: %f",final);
}

void exercicio4(void){
	int anonasc,anoatual;
	printf("Digite ano nascimento:");
	scanf("%d",&anonasc);
	printf("Digite ano anoatual:");
	scanf("%d",&anoatual);
	printf("Idade: %d \n",(anoatual-anonasc));
	printf("Idade em 2035: %d \n",(2035-anonasc));
}

void exercicio1_2(void){
	int a,b;
	printf("Digite A:");
	scanf("%d",&a);
	printf("Digite B:");
	scanf("%d",&b);
	if (a==b){
		printf("Iguais");
	} else {
		printf("Diferentes");		
	}
}




