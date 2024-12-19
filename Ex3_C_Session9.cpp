#include <stdio.h>
int main() {
	int array[100];
	printf("nhap so phan tu muon nhap vao mang: ");
	int n,position;
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		printf("array[%d]= ",i);
		scanf("%d", &array[i]);
	} printf("nhap vi tri muon xao: ");
	scanf("%d", &position);
	int currentLength=n;
	if(position>currentLength ||position<0){
		printf("khong hop le moi nhap lai");
	} else{
		for(int i=position;i<currentLength;i++) {
			array[i]=array[i+1];
		} currentLength-=1;
	} for(int i=0;i<currentLength;i++){
		printf("\narray[%d]= %d",i, array[i]);
	} return 0;
}
