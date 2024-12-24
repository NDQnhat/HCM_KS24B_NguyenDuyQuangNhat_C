#include<stdio.h>
void printArr(int arr[],int length);
int main() {
	int arr[]={1,0,8,17,13};
	int length=sizeof(arr)/sizeof(int);
	printArr(arr,length);
	return 0;
}
void printArr(int arr[],int length){
	printf("cac phan tu trong mang: ");
	for (int i=0;i<length;i++){
		printf("%d\t", arr[i]);
	} 
}
