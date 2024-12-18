#include <stdio.h>
int main() {
	int array[5]={1,2,3,4,5};
	int length=sizeof(array)/sizeof(int);
	for(int i=length;i>0;i--) {
		printf("%d ",i);
	} return 0;
}
