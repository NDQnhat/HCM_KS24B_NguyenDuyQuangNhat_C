#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int check(int input);
int main() {
	int a,b;
	printf("nhap a,b:\n");
	scanf("%d%d", &a,&b);
    if(check(a)){
        printf("%d la prime", a);
    }else{
        printf("%d khong phai prime", a);
    } if(check(b)){
        printf("\n%d la prime", b);
    }else{
        printf("\n%d khong phai prime", b);
    }return 0;
}
int check(int input){
	if(input<2){
		return false;
	} else {
		int flag=1;
		for(int i=2;i<sqrt(input);i++){
			if(input%i==0){
				flag=0;
				return false;
			}
		}if(flag){
			return true;
		}
	} 
}
