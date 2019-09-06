#include<stdio.h>
#include<locale.h>


main(){
	int l,c;
	int mat[4][3];
	
	for (l=0;l<4;l++){
		for (c=0;c<3;c++){
			printf("\nDigite mat [%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
		}
	}
	printf("\n\nValores da matriz \n\n");
	for (l=0;l<4;l++){
		for (c=0;c<3;c++){
			printf("%d\t", mat[l][c]);
		}
		printf("\n");
	}	
}
