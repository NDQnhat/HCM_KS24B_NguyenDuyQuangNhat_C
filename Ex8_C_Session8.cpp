#include <stdio.h>
int main() {
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++) {
			printf("%d", array[i][j]);
		}
	} printf("\n");
	printf("cacs phna tu tren duogn choe phu: ");
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++){
			if(i+j+1==3){
				printf("%d ", array[i][j]);
				sum+=array[i][j];
			}
		}
	} printf("\ntong ca c phan tu tenr duogn cheo phu= %d", sum);
	return 0;
} 
