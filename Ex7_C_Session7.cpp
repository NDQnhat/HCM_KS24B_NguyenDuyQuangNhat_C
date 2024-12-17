#include <stdio.h>
int main() {
	int n;
	printf("nhap so phnaa tu mang: ");
	scanf("%d", &n);
	int array[n];
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		do {
			printf("nhap vao mang array[%d]=", i);
			scanf("%d", &array[i]);
		} while(array[i]%2==0);
	} return 0;
}
