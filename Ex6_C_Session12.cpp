#include <stdio.h>
#include <stdbool.h>
bool perfectNum(int num);
int main() {
    int a,b;
    printf("nhap vao 2 so: ");
    scanf("%d%d", &a,&b);
    if(perfectNum(a)){
        printf("%d la so hoan hao", a);
    }else{
        printf("%d khong phai so hoan haoa", a);
    } 
    printf("\n");
    if(perfectNum(b)){
        printf("%d la so hoan hao", b);
    }else{
        printf("%d khong phai so hoan haoa", b);
    }return 0;
}
bool perfectNum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            sum+=i;
        }
    }if(sum==2*num){
        return true;
    }else {
        return false;
    }
}
