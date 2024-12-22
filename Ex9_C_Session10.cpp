#include <stdio.h>
int main() {
	int x,y;
	printf("nhap so hang va cot ma tran:\n");
	scanf("%d%d", &x, &y);
	int arr[x][y];
	printf("Nhap vao mang:\n");
	for(int i=0;i<x;i++){
		for(int j=0; j< y;j++){
			printf("arr[%d][%d]= ",i ,j);
			scanf("%d", &arr[i][j]);
		}
	} printf("ma tran ban dau:\n");
	for(int i=0;i< x;i++){
		for (int j=0;j< y;j++){
			printf("%d", arr[i][j]);
		} printf("\n");
	} printf("ma tran tang dan theo duong cheo chinh:\n");
	for(int i=0;i<x-1;i++){
		for(int j=i+1;j<x;j++){
			for(int k=0;k<y-1;k++){
				for(int t=k+1;t<y;t++){
					if(arr[i][k]>arr[j][t] && i==k &&j==t){
						int temp=arr[i][k];
						arr[i][k]=arr[j][t];
						arr[j][t]=temp;
					}
				} 
			}
		}
	}for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("%d", arr[i][j]);
		}printf("\n");	
	} return 0;
}
