#include <stdio.h>
int main() {
	int array[5]={1,2,3,4,5};
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		if(array[i]%2==0) {
			array[i]=array[i]+3;
			printf("%d\n", array[i]);
		} else{
			array[i]=array[i]+2;
			printf("%d\n", array[i]);
		}
	} return 0;
}
