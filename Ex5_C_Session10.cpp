#include <stdio.h>
int main() {
	int array[]={1,15,37,68,49,21,33,67,0,7};
	int temp,length=sizeof(array)/sizeof(int);
	for(int i=0;i<length-1;i++){
		for(int j=0;j<length-i-1;j++){
			if(array[j]>array[j+1]) {
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	} int n,left=0,right=length-1;
	printf("nhap gia tri can tim: ");
	scanf("%d", &n);
	while(left<=right){
		int mid=(left+right)/2;
		if(array[mid]==n){
			printf("gia tri can tim %d o array[%d]",n, mid);
			break;
		}else if(array[mid]<n){
			left=mid+1;
		} else {
			right=mid-1;
		}
	} return 0;
}
