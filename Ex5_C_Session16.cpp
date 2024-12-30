#include <stdio.h>
void updateArr(int *arr,int newValue, int position)
{
    int length=7;
    if(position<0 || position>length){
        printf("vitri khong hop le");
    }else{
        *(arr+position)=newValue;
    }

};
int main() {
    int arr[]={1,5,8,7,6,13,19};
    int length=sizeof(arr)/sizeof(int);
    int value,pos;
    printf("nhap gtri can doi trong mang: ");
    scanf("%d", &value);
    printf("nhap vi tri: ");
    scanf("%d", &pos);
    updateArr(arr,value,pos);
    printf("amng moi: ");
    for(int i=0;i<length;i++){
        printf("%d\t", *(arr+i));
    }return 0;
}