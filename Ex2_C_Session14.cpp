#include <stdio.h>
#include <cstring>
int main() {
    char a[]="Goodbye World";
    char b[]={'S','a','y','o','n','a','r','a','S','e','k','a','i','\0'};
    int length=strlen(a);
    for(int i=0;i<length;i++){
        printf("%c\n", a[i]);
    } return 0;
}