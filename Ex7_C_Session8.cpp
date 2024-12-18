#include <stdio.h>
int main() {
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ",array[i][j]);
		} printf("\n");
	} printf("cacs phan tu trn duogn cheo chinh: ");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++) {
			if(i==j) {
				sum+=array[i][j];
				printf("%d ",array[i][j]);
			}
		}
	} printf("\ntong cac phaan tu treen duobg cheo chinh= %d", sum);
	return 0;
}
