#include <stdio.h>
void swap(int *num1, int *num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main() 
{
    int num1=1, num2=11;
    printf("truoc khi swap: %d, %d", num1,num2);
    swap(&num1,&num2);
    printf("\nasu swap: %d, %d", num1, num2);
    return 0;
}