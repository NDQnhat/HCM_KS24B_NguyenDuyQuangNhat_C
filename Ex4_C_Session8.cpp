#include <stdio.h>
int main() {
	int array[2][3]={{14,17,19},{23,31,87}};
	int max=array[0][0];
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++){
			if(array[i][j]>max) {
				max=array[i][j];
			}
		}
	} printf("phna tu lon naht: %d", max);
	return 0;
}
