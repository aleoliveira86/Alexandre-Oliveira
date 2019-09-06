#include<stdio.h>
#include<locale.h>


main(){
	int l,c;
	int mat[4][4];
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("\nDigite a matriz [%d][%d]", l,c);
			scanf("%d", &mat[l][c]);
		}
	}
	
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%d\t", mat[l][c]);
		}
		printf("\n");
	}
	if(l>=10 || c>=10){
		printf("\n%dMatrizes maiores que 10: ", mat[l][c]);	
	}
}

