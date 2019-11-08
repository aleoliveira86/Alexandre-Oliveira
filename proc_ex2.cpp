//2. Faça um procedimento que recebe por parâmetro o raio de uma esfera e calcula o seu
//volume (v = 1.33 * PI * R³). Pesquise e use a função pow() para a exponenciação. 

#include <stdio.h>
#include <math.h>

void volume(float r){
	float r3,v;
	
	r3=pow(r,3);
	v=1.33*3.1416*r3;
	printf("Raio digitado %2.f. Seu volume = %f", r,v);
}

main(){
	
	float r,v;
	
	printf("Digite o raio de uma esfera para calcular o seu volume: ");
	scanf("%f",&r);
	volume(r);
	
}
