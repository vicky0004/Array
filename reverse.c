//WAP to reverse  an array
#include <stdio.h>
void reverse(int* ,int);

int main(){
	int i,j,n,max;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	reverse(arr,n);
	
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

void reverse(int *ar,int size){
	int i,temp;
	int j=size-1;
	for(i=0;i<size/2;i++,j--){
		temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
	}
}
