#include <stdio.h>
long long factorial(int n){
  if(n==0)
    return 1;
  return n*factorial(n-1);
};
int main(){
  int n;
  printf("nhap vao so n: ");
  scanf("%d", &n);
  printf("giai thua cua %d la: %lld",n,factorial(n));
  return 0;
}
