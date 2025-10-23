#include <stdio.h>

int main(){
 	size_t i=0,j=0;
 	
 	for (i=100;i>=1;i--){
 		
 		for (j=1;j<=i;j++){
 			printf("*");
		 }
		printf("\n");
	 }
 	
 	return 0;
 }
