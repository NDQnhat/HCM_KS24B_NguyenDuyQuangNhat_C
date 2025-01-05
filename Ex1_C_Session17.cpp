#include <stdio.h>
#define MAX 789
void inputArray(int *arr, int n)
{
    printf("moi ban nhap vao mang:\n");
    for(int i=0;i<n;i++){
        printf("arr[%d]= ",i);
        scanf("%d", arr+i);
    }
}
void showArray(int *arr,int n)
{
    printf("mang da nhap: ");
    for(int i=0;i<n;i++){
        printf("%d\t", *(arr+i));
    }
}
int calculateSum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= *(arr+i);
    } return sum;
}
int findMax(int *arr,int n)
{
    int max=*arr;
    for(int i=0;i<n;i++){
        if(max<*(arr+i)){
            max=*(arr+i);
        }
    }return max;
}
int main() 
{
    int n,arr[MAX];
    while(1)
    {
        printf("\n==========MENU==========\n");
        printf("1.nhap vao so phan tu va tung phan tu\n");
        printf("2.hien thi cac phan tu trong mang\n");
        printf("3.tinh do dai mang\n");
        printf("4.tinh tong cac phan tu trong mang\n");
        printf("5.hien thi phan tu lon nhat\n");
        printf("6.Thoats\n");
        printf(" lua chon cua ban: ");
        int command;
        int *cmdPtr=&command;
        scanf("%d", cmdPtr);
        switch(*cmdPtr)
        {
            case 1:
                printf("moi ban nhap so phan tu can nhap: ");
                scanf("%d", &n);
                inputArray(arr,n);
                break;
            case 2:
                showArray(arr,n);
                break;
            case 3:
                    printf("do dai mang= %d", n);
                    break;
            case 4:
                {
                    int sum=calculateSum(arr,n);
                    printf("tong cac phan tu trong mang: %d",sum);
                    break;
                }
            case 5:
                {
                    int max=findMax(arr,n);
                    printf("giatri lon nhat trong magn: %d",max);
                    break;
                }
            case 6:
                printf("ban da thoat chuong trihn");
                return 0;
            default:
                printf("lua chon khong hop le moi nhap lai: ");
                break;
        }
    }
}