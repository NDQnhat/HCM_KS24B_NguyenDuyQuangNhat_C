#include <stdio.h>
int findMax(int arr[], int length);
int main() {
	int n;
	printf("n=");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	int size=n;
	int MAX=findMax(arr,size);
	printf("so lon nhat: %d", MAX);
	return 0;
}
int findMax(int arr[],int length){
	int max=arr[0];
	for(int i=1;i<length;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}return max;
}
