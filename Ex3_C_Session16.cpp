#include <stdio.h>
void calculateSum(int a, int b,int *sum)
{
    *sum=a+b;
}
int main() 
{
    int a=11,b=22,sum;
    calculateSum(a,b,&sum);
    printf("togn %d va %d la: %d",a,b,sum);
    return 0;
}