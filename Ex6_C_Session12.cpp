#include <stdio.h>
int perfectNum(int num);
int main() {
    int a,b;
    printf("nhap vao 2 so: ");
    scanf("%d%d", &a,&b);
    perfectNum(a);
    printf("\n");
    perfectNum(b);
    return 0;
}
int perfectNum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            sum+=i;
        }
    }if(sum==2*num){
        printf("%d la so hoan hao", num);
        return 1;
    }else {
        printf("%d khong phai so hoan haoa", num);
        return 0;
    }
}
