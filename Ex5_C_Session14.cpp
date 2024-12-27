#include <stdio.h>
#include <cstring>
int main() {
    int count=1;
    char string[]="world say hello";
    int length=(int)strlen(string);
    for(int i=0;i<length;i++){
        if(string[i]==' '){
            count++;
        }
    }printf("%d", count);
    return 0;
}