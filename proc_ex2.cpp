//2. Fa�a um procedimento que recebe por par�metro o raio de uma esfera e calcula o seu
//volume (v = 1.33 * PI * R�). Pesquise e use a fun��o pow() para a exponencia��o. 

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
