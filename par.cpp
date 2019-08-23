#include<stdio.h>

main(){
	
	int v[6], indice=0;
	
	for(indice=0; indice<6; indice++){
		scanf("%d", &v[indice]);
	}
	
	printf("\nValores pares informados");
	
	for(indice=0; indice<6; indice++)
		if(v[indice]%2==0)
		 printf("%d ", v[indice]);
		
	
	
		
}
