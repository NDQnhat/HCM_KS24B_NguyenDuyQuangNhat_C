#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/*#define a 1
#define b 2*/
//int *str=(int*)calloc(100,sizeof(str));
int arr[100];
int inputArr(int *arr);
bool checkEven(int num);
bool isPrime(int number);
void revArr(int *arr,int size);
void arrangeArr(int *arr, int size);
bool findElement(int *arr,int size,int n);
void printArr(int *arr,int size);
int main()
{
    int command,length=0,number;
    while(true)
    {
        printf("\n=============MENU================\n");
        printf("1.nhap so phan tu va tung phan tu\n");
        printf("2.in ra cac so chan\n");
        printf("3.in cac phan tu la so nguyen to\n");
        printf("4.dao nguoc mang\n");
        printf("5.sap xep mang\n");
        printf("6.nhap 1 phan tu va tim kiem\n");
        printf("7.thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &command);
        switch(command)
        {
            case 1:
                length=inputArr(arr);
                break;
            case 2:
                printf("\ncac so chan: ");
                for(int i=0;i<length;i++){
                    if (checkEven(*(arr+i))) {
                        printf("%d\t", *(arr+i));
                    }
                } break;
            case 3:
                printf("\ncac phan tu la so prime: ");
                for(int i=0;i<length;i++){
                    if(isPrime(*(arr+i))){
                        printf("%d\t", *(arr+i));
                    }
                } break;
            case 4:
                revArr(arr,length);
                printf("\nmang sau reverse: ");
                printArr(arr,length);
                break;
            case 5:
                arrangeArr(arr,length);
                printf("\nmang sau sap xap xep: ");
                printArr(arr,length);
                break;
            case 6:
                printf("\nnhap so can tim: ");
                scanf("%d", &number);
                if(findElement(arr,length,number)){
                    printf("so vua nhap co trong mang");
                }else {
                    printf("khong tim thay trong mang");
                }
                break;
            case 7:
                printf("\nban da thoat chuong trinh");
                return 0;
            default:
                printf("\nomi ban nhap lai");
                break;
        }
    } return 0;
}
int inputArr(int *arr)
{
    int n;
    printf("so phan tu muon nhap: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("arr[%d]= ",i);
        scanf("%d", arr+i);
    }return n;
};
bool isPrime(int number)
{
    if(number>=2){
        for(int i=2;i<=sqrt(number);i++){
            if(number%i==0){
                return false;
            }    
        } return true; 
    }else{
        return false;
    }
};
bool checkEven(int num)
{
    if(num%2==0){
        return true;
    }else{
        return false;
    }
};
void revArr(int *arr,int size)
{
    for(int i=0;i<size/2;i++){
        int temp=*(arr+i);
        *(arr+i)=*(arr+size-i-1);
        *(arr+size-i-1)=temp;
    }
};
void arrangeArr(int *arr, int size)
{
    printf("\na.Tang dan");
    printf("\nb.Giam dan");
    char choice;
    fflush(stdin);
    printf("\nlua chon cua ban: ");
    scanf("%c", &choice);
    switch (choice)
    {
        case 'a':
        {
            for(int i=0;i<size;i++){
                int key=*(arr+i);
                int j=i-1;
                while(j>=0 && key<*(arr+j)){
                    *(arr+j+1)=*(arr+j);
                    j--;
                } *(arr+j+1)=key;
            }    
            break;
        }
        case 'b':
        {
            for(int i=0;i<size-1;i++){
                for(int j=0;j<size-i-1;j++){
                    if(*(arr+j)<*(arr+j+1)){
                        int temp=*(arr+j);
                        *(arr+j)=*(arr+j+1);
                        *(arr+j+1)=temp;
                    }
                }
            } break;
        }
        default:
            printf("\nlua chon khong hop le");
            break;
    }
};
bool findElement(int *arr,int size,int n)
{
    for(int i=0;i<size;i++){
        if(*(arr+i)==n){
            return true;
        }
    }return false;
};
void printArr(int *arr,int size)
{
    for(int i=0;i<size;i++){
        printf("%d\t", *(arr+i));
    }
}
