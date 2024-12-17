#include <stdio.h>
int main() {
	int array[5];
	printf("nhap cac phna tu trogn mang:\n");
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		printf("array[%d]= ", i);
		scanf("%d", &array[i]);
	} printf("cac phan tu trong mang: \n");
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		printf("array[%d]=%d\n", i, array[i]);
	} return 0;
}
