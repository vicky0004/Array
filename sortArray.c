//WAP to reverse  an array
#include <stdio.h>
void sortArray(int* ,int);

int main(){
	int i,j,n,max;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	sortArray(arr,n);
	
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

void sortArray(int *ar,int size){
	int i,j,temp;
	
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(ar[i]>ar[j]){
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
}
