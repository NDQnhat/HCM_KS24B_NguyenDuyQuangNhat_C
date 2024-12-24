#include <stdio.h>
float calculateSum(float a,float b);
int main(){
	float a,b,sum;
	printf("nhap 2 so can tih tong:\n");
	scanf("%f%f", &a,&b);
	sum=calculateSum(a,b);
	printf("tong 2 so= %.2f",sum);
	return 0;
}
float calculateSum(float a,float b){
	float sum=a+b;
	return sum;
}
