#include <stdio.h>
int main() {
	int array[]={9,5,77,24,31,67,0,12};
	int length=sizeof(array)/sizeof(int);
	for (int i=0;i<length;i++){
		int minIndex=i;
		for(int j=i+1;j<length;j++){
			if(array[j]<array[minIndex]){
				minIndex=j;
			}
		} int temp=array[minIndex];
		array[minIndex]=array[i];
		array[i]=temp;
	} printf("\nmang sau sap xep: ");
	for(int i=0;i<length;i++){
		printf("%d ",array[i]);
	}return 0;
}
