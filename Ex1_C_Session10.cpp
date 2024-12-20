#include <stdio.h>
int main() {
	int array[10]={1,3,4,18,67,49,58,24,51,44};
	int input,length=sizeof(array)/sizeof(int);
	int temp,flag=0;
	printf("nhap 1 phan tu abt ki: ");
	scanf("%d",&input);
	for(int i=0;i<length;i++){
		if(array[i]==input){
			flag=1; temp=i;
		}
	} if(flag){
		printf("phan tu %d nam o array[%d]",input, temp);
	} else {
		printf("phan tu khong ton tai trong mang");
	}
}
