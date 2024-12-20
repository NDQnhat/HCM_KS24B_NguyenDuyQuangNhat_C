#include <stdio.h>
int main() {
	int array[10]={0,9,8,7,6,5,4,3,2,1};
	int temp,size=sizeof(array)/sizeof(int);
	printf("mang ban dau: ");
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		} 
	} printf("\nmang sau sap xep: ");
	for(int i=0;i<size;i++){
		printf("%d ", array[i]);
	} return 0;
}
