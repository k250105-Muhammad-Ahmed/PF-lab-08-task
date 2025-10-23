#include <stdio.h>

int main(){
	size_t i=0,j=0,n=0;
	
	printf("Number of table: ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
 		printf("%2d:",i);
 		for (j=1;j<=n;j++){
 			printf("%5d ",(i*j));
		 }
		printf("\n");
	 }
 	
 	return 0;
	
	
}
