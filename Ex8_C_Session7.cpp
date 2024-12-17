#include <stdio.h>
int main() {
	int x,y;
	printf("nhap so hang va cot cua mang: ");
	scanf("%d %d", &x, &y);
	int array[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++) {
			printf("array[%d][%d]= ", i, j);
			scanf("%d", &array[i][j]);
		}
	} for(int i=0;i<x;i++) {	
		for(int j=0;j<y;j++) {
			printf("%d ", array[i][j]);
		} printf("\n");
	} return 0;
}
