#include <stdio.h>
#include <ctype.h>
#include <cstring>
#define MAX 989985
int main() {
    char string[MAX];
    printf("nhap vao 1 chuoi ky tu bat ky: ");
    gets(string);
    int num=0,letter=0,specialChar=0;
    int length=(int)strlen(string);
    for(int i=0;i<length;i++){
        if(isalpha(string[i])){
            letter++;
        }else if(isalnum(string[i])){
            num++;
        } else{
            specialChar++;
        }
    }printf("so ky tu la chu cai: %d", letter);
    printf("\nso ki tu la chu sso: %d\n", num);
    printf("so kyi tu dacbiet: %d", specialChar);
    return 0;
}