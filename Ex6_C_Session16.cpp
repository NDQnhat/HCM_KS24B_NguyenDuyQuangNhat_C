#include <stdio.h>
int searchPos(int *arr,int value)
{
    int flag=1;
    for(int i=0;i<5;i++){
        if(*(arr+i)==value){
            flag=0;
            return i;
        }
    }if(flag){
        return -1;
    }
};
int main() 
{
    int arr[5]={1,2,3,4,5};
    int pos,value;
    printf("nhap pahn tu can tim: ");
    scanf("%d", &value);
    pos=searchPos(arr,value);
    if(pos!=-1){
        printf("tim thay %d trong mang tai vtri: %d", value,pos);
    }else{
        printf("khong tim thay trong mang");
    }return 0;
}