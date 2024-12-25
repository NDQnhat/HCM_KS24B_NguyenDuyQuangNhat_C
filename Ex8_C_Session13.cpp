#include <stdio.h>
int uocChung(int num1,int num2){
    int max,ucln;
    if(num1==num2){
        printf("ca 2 deu la 1 so");
    }else if(num1>num2){
        max=num2;
    }else {
        max=num1;
    }for (int i=max;i>=1;i--){
        if(num1%i==0 && num2%i==0){
            ucln=i;
            printf("so %d la ucln cua %d va %d", i, num1,num2);
            break;
        }
    }return ucln;
}
int main() {
    int x,y;
    printf("nhap 2 so can tim ucln:\n");
    scanf("%d%d", &x,&y);
    uocChung(x,y);
    return 0;
}