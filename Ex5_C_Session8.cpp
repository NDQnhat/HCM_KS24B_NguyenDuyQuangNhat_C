#include <stdio.h>
int main() {
	int array[2][3]={{3,4,5},{7,8,9}};
	int sum=0;
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ",array[i][j]);
			if(j==0 ||j==3-1||i==0|| i==2-1){
				sum+=array[i][j];
			}
		} printf("\n");
	} printf("tong cac phna tu tren birn ma tran= %d", sum);
	return 0;
}
