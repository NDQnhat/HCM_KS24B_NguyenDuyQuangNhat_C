#include <stdio.h>
int main() {
	int array[5]={4,7,22,11,1};
	int max=array[0],min=array[0];
	for(int i=0;i<sizeof(array)/sizeof(int);i++) {
		if(array[i]>max) {
			max=array[i];
		} if(array[i]<min) {
			min=array[i];
		}
	} printf("phan tu lon nhat: %d, phan tu nho nhat: %d", max, min);
	return 0;
} 
