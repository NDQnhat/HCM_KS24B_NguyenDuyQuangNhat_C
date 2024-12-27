#include <stdio.h>
#include <cstring>
int main() {
    char string[]="adnsjf akdnfjfeu";
    char input;
    printf("nhap 1 ky tu: ");
    input=getchar();
    int count=0;
    int length=(int)strlen(string);
    for(int i=0;i<length;i++){
        if(input==string[i]){
            count++;
        }
    }printf("ky tu %c xuat hien %d lan trong mang",input, count);
    return 0;
}