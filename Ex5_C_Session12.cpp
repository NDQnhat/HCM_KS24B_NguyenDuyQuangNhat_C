#include <stdio.h>
#include <math.h>
int check(int input);
int main() {
	int a,b;
	printf("nhap a,b:\n");
	scanf("%d%d", &a,&b);
	check(a);
	printf("\n");
	check(b);
	return 0;
}
int check(int input){
	if(input<2){
		printf("%d khong pahai so prime",input);
	} else {
		int flag=1;
		for(int i=2;i<sqrt(input);i++){
			if(input%i==0){
				printf("%d khong phai prime", input);
				flag=0;
				return 0;
			}
		}if(flag){
			printf("%d la so nguyemn to", input);
			return 1;
		}
	} 
}
