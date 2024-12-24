#include <stdio.h>
int main() {
	int array[]={9,5,77,24,31,67,0,12};
	int length=sizeof(array)/sizeof(int);
	for(int i=0;i<length-1;i++){
        int min=arr[i];
        for(int j=i+1;j<length;j++){
            if(min>arr[j]){
                min=arr[j];
                arr[j]=arr[i];
                arr[i]=min;
            }
        }
        } printf("\nmang sau sap xep: ");
	for(int i=0;i<length;i++){
		printf("%d ",array[i]);
	}return 0;
}
