#include <stdio.h>
int main() {
	int array[5]={1,3,5,4,9};
	int flag=1;
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		if(array[i]%2==0) {
			printf("%d\n", array[i]);
			flag=0;
		}
	} if(flag) {
		printf("mang khong chua so vhan");
	}
	return 0;
}
