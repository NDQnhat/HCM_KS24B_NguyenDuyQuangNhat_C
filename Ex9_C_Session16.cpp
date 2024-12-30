#include <stdio.h>
void updateArr(int *arr,int addValue, int position)
{
    int length=7;
    if(position<0){
        position=0;
        for(int i=length;i>0;i--){
            *(arr+i)=*(arr+i-1);
        } *arr=addValue;
        length++;
    }else if(position>length){
        position=length;
        *(arr+position)=addValue;
        length++;
    }else{
        for(int i=length;i>position;i--){
            *(arr+i)=*(arr+i-1);
        }*(arr+position)=addValue;
        length++;
    }

};
int main() {
    int arr[]={1,5,8,7,6,13,19};
    int length=sizeof(arr)/sizeof(int);
    int value,pos;
    printf("nhap gtri can truyen vao mang: ");
    scanf("%d", &value);
    printf("nhap vi tri: ");
    scanf("%d", &pos);
    updateArr(arr,value,pos);
    printf("amng moi: ");
    for(int i=0;i<length+1;i++){
        printf("%d\t", *(arr+i));
    }return 0;
}