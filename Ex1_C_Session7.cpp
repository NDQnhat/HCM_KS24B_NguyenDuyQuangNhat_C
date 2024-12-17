#include <stdio.h>
int main() {
	int array[3]={1, 3, 7};
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		printf("array[%d]=%d\n", i, array[i]);
	} return 0;
}
