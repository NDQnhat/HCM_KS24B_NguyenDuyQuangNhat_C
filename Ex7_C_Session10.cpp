#include <stdio.h>
int main(){
    int x,y;
    printf("nhap vao so hang va cot cua ma tran:\n");
    scanf("%d%d",&x, &y);
    int arr[x][y];
    printf("nhap vao mang: \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d", &arr[i][j]);
        }
    } printf("mang ban dau:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y-1;j++){
            for(int k=j+1;k<y;k++){
                if(arr[i][j]>arr[i][k]){
                    int temp=arr[i][j];
                    arr[i][j]=arr[i][k];
                    arr[i][k]=temp;
                }
            }
        }
    } printf("\nmang sau sap xep:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    } return 0;
}