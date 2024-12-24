#include <stdio.h>
long long giaiThua(int n);
int main() {
	int x;
	printf("nhap giai thua can tinh: ");
	scanf("%d", &x);
	giaiThua(x);
	return 0;
} 
long long giaiThua(int n){
	long long factorial=1;
	for(int i=1;i<=n;i++){
		factorial*=i;
	} printf("giai thua can tim: %lld", factorial);
	return factorial;
}
