#include <stdio.h>
int main() {
	int array[]={1,4,10,24,51,33,21,2,15};
	int temp,length=sizeof(array)/sizeof(int);
	for(int i=1;i<length;i++){
		temp=array[i];
		int j=i-1;
		while(array[j]>temp && j>=0){
			array[j+1]=array[j];
			j--;
		} array[j+1]=temp;
	} printf("magn sau khi sap xep chen: ");
	for(int i=0;i<length;i++){
		printf("%d ",array[i]);
	} return 0;
}
