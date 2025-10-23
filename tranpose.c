#include <stdio.h>

int main(){
	
	int matrix1[3][3]={
		{12,45,32},
		{2,13,45},
		{56,72,41}
	};
	
	size_t i=0,j=0;
	
	printf("Matrix \n");
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%3d ",matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix changed\n");
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%3d ",matrix1[j][i]);
		}
		printf("\n");	
	}
	return 0;
} 	
