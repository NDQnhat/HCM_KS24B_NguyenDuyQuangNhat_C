#include <stdio.h>
#include <math.h>
int main() {
	int n;
	printf("nhap so phan tu co trong mang: ");
	scanf("%d", &n);
	int array[n];
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		printf("array[%d]= ", i);
		scanf("%d", &array[i]);
	} printf("cac phna tu la so nguywn to: ");
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		int check=1;
		for(int j=2;j<=sqrt(array[i]);j++) {
			if(array[i]%j==0) {
				check=0;
				break;
			}
		} if(check){	
				printf("%d ", array[i]);
			} 
	} return 0;
}
