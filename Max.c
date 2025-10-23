#include <stdio.h>
int main() {
	int i,j,k,max;
	int arr[2][2][2] = {
		{{1, 2}, {3, 4}},
 		{{5, 6}, {7, 8}}
 		};
 	// Displaying the 3D array
 	for (i = 0; i < 2; i++) {
 		for ( j = 0; j < 2; j++) {
 			for ( k = 0; k < 2; k++) {
 				printf("%d ", arr[i][j][k]);
 			}
 			printf("\n");
 		}
 		printf("\n");
 	}
 	max=arr[0][0][0];
 	for (i = 0; i < 2; i++) {
 		for ( j = 0; j < 2; j++) {
 			for ( k = 0; k < 2; k++) {
 				if (max<arr[i][j][k]){
 					max=arr[i][j][k];
				}
 			}
 		}
 	}
 	
 	printf("max %d",max);
 	return 0;
}
