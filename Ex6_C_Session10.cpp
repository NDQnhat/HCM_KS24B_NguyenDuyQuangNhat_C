#include <stdio.h>
int main() {
    int array[]={1,41,25,89,76,31,1,24,1};
    int check[10];
    int n,length=sizeof(array)/sizeof(int);
    printf("nhap phan tu can tim: ");
    scanf("%d", &n);
    int flag=0,index=0;
    for(int i=0;i<length;i++) {
        if(array[i]==n) {
            flag=1;
            check[index]=i;
            index++;
        }
    }if(flag) {
        printf("phan tu %d co trong mang", n);
        printf("\n vi tri cua cac phan tu %d la: ",n);
        for(int i=0;i<index;i++) {
            printf("array[%d] ", check[i]);
        }
    }else{
        printf("phan tu %d khong co trong mang", n);
    } return 0;
}