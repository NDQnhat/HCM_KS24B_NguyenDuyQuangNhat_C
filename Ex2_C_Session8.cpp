#include <stdio.h>
int main() {
	int array[5]={1,3,9,17,26};
	int length=sizeof(array)/sizeof(int),n,flag=1;
	printf("nhap vao 1 phna tu: ");
	scanf("%d", &n);
	for(int i=0;i<length;i++) {
		if(array[i]==n) {
			printf("vi tri phan tu %d trngo magn la: array[%d]", n, i);
			flag=0;
		}
	} if(flag){
		printf("phan tu khong ton tai trong mang");
	} return 0;
}
