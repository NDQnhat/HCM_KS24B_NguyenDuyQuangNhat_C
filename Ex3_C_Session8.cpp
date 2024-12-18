#include <stdio.h>
int main() {
	int x;
	printf("nhap vao 1 so nguyen dugno: ");
	scanf("%d", &x);
	int y=x,array[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++) {
			printf("nhap vao array[%d][%d]= ", i,j);
			scanf("%d", &array[i][j]);
		}
	} printf("mang tren duoi dang ma tran vuong: \n");
	for(int i=0;i<x;i++) {
		for (int j=0;j<y;j++) {
			printf("%d ", array[i][j]);
		} printf("\n");
	} return 0;
}
