#include <stdio.h>

int main(){
	int i,j,k;
	int arr[4]={1,2,3,4};
	for(i=0;i<4;i++){
		printf("\n");
		for(j=i;j<4;j++){
			printf("{ ");
			for(k=i;k<=j;k++){
				printf("%d, ",arr[k]);
			}
			printf("}\n");
		}
		
	}
	return 0;	
}
