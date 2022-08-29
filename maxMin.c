//WAP to find maximun and minimum element within an array
#include <stdio.h>
void maxMin(int* ,int);

int main(){
	int i,j,n,max;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	maxMin(arr,n);
	return 0;
}

void maxMin(int *ar,int x){
	int i,j;
	int max=ar[0];
	int min=ar[0];
	for(i=0;i<x;i++){
		for(j=i;j<x;j++){
			if(max<ar[j])
				max=ar[j];
			if(min>ar[j])
				min=ar[j];
		}
	}
	int ch;
	printf("Enter choice\n1:find maximum\n2:find minimum");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Max element is %d",max);
			break;
		case 2:
			printf("Min element is %d",max);
			break;
	}
}
