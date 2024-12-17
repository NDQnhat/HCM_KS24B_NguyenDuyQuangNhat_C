#include <stdio.h>
int main() {
	int n;
	printf("nhap vao so phnatu cua mang: ");
	scanf("%d", &n);
	int array[n];
	for(int i=0;i<n;i++) {
		printf("array[%d]= ", i);
		scanf("%d", &array[i]);
	} return 0;
}
