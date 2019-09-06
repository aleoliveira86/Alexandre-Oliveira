#include <stdio.h>

main(){
	
	int i;
	int v[10];
	
	for (i=0;i<10;i++){
		printf("\nDigite vetor[%d]: ", i);
		scanf("%d", &v[i]);
		}
		
	
	for (i=0;i<10;i++){
		if(v[i]%2!=0){
			printf("%d ",v[i]);
		}
	}
}
