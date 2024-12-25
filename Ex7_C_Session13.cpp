#include <stdio.h>
int array(int row, int col){
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    } printf("ma tran da nhap:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t", arr[i][j]);
        }printf("\n");
    }return arr[row][col];
}
int main() {
    int a,b;
    printf("nhap so hang va cot cua matran:\n");
    scanf("%d%d", &a,&b);
    array(a,b);
    return 0;
}