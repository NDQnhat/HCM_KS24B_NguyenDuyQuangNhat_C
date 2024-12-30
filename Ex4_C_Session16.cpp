#include <stdio.h>
void printArr(int *arr,int length);
int main()
{
    int arr[]={1,5,9,21,33,4};
    int length=sizeof(arr)/sizeof(int);
    printf("tata ca cac phna tu trong mang: ");
    printArr(arr,length);
    return 0;
}
void printArr(int *arr,int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d\t", *(arr+i));
    }
}
