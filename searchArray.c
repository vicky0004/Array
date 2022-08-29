//WAP to search an element by value or by location in an array
#include <stdio.h>
void searchArray(int* ,int,int);

int main(){
	int i,size,x;
	printf("enter the size of array: ");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	
	int choice;
	printf("choice--\n1:search by value\n2:search by position: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter element value to search: ");
			scanf("%d",&x);
			searchArray(arr,x,size);
			break;
		case 2:
			printf("Enter the position: ");
			int pos;
			scanf("%d",&pos);
			if(pos<0 || pos>size){
				printf("invalid position..");
			}
			else{
			printf("element is at %d position is %d\n",pos,arr[pos-1]);
			}
	}

	
	return 0;
}

void searchArray(int *ar,int x,int size){
	int i,pos=-1;
	
	for(i=0;i<size;i++){
		if(ar[i]==x){
			pos=i+1;
		}
	}
	if(pos==-1){
		printf("invalid position..");
	}
	else{
		printf("element is at %d position is %d\n",pos,ar[pos-1]);
	}
}
