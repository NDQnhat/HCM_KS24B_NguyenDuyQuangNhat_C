#include <stdio.h>
void arrangeArr(int *arr)
{
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}
int main()
{
    int arr[5]={4,1,9,7,5};
    printf("mang ban dau: ");
    for(int i=0;i<5;i++){
        printf("\t%d\t", *(arr+i));
    } arrangeArr(arr);
    printf("\nmang sau sap xep: ");
    for(int i=0;i<5;i++){
        printf("\t%d\t", *(arr+i));
    } return 0;
}