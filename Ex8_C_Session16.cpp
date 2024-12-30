#include <stdio.h>
int main()
{
    int n;
    printf("nhap so luong ky tu muon nhap vao chuoi: ");
    scanf("%d", &n);
    char inputString[n+1];
    char reverseString[n+1];
    inputString[n]='\0'; 
    reverseString[n]='\0';
    printf("moi ban nhap tung ky tu vao chuoi:\n");
    for(int i=0;i<n;i++){
        scanf(" %c", inputString+i);
        *(reverseString+n-i-1)=*(inputString+i);
    }printf("\nchuoi da nhap: %s", inputString);
    printf("\nchuoi sau dao nguoc: %s", reverseString);
    return 0;
}