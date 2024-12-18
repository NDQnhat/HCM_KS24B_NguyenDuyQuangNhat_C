#include <stdio.h>
int main() {
	int array[100];
	int n,currentLength=0,addIndex;
	do{
		printf("nhap so phnan tuu muno nhap: ");
		scanf("%d", &n);
	}while(n<1||n>100);
	for(int i=0;i<n;i++) {
		printf("array[%d]= ",i);
		scanf("%d", &array[i]);
	} int num;
	printf("nhap gtri muon them vao mag: ");
	scanf("%d", &num);
	do {
		printf("mhap vi tri muon them vao magn: ");
		scanf("%d", &addIndex);
	} while(addIndex<0 ||addIndex>100);
	currentLength=n;
	if(addIndex>=currentLength) {
		array[addIndex]=num;
		currentLength=addIndex+1;
	} else{
		for(int i=currentLength;i>addIndex;i--) {
			array[i]=array[i-1];
		} array[addIndex]=num;
		currentLength++;
	}printf("mang vau thme: ");
	for(int i=0;i<currentLength;i++){
		printf("%d ", array[i]);
	} return 0;
}
