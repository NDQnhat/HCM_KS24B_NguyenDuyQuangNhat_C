#include <stdio.h>
int main() {
	int array[10]={1,2,3,4,5,6,7,8,9,0};
	printf("nhap vi tri va gtri can sua: ");
	int position,num;
	scanf("%d%d", &position, &num);
	array[position]=num;
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		printf("%d ",array[i]);
	} return 0;
}
