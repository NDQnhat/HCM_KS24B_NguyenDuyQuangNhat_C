#include <stdio.h>
#include <cstring>
int main() {
    char string[]="aca115a65ffe";
    char num[]="1234567890";
    int size=(int)strlen(num);
    int length=(int)strlen(string);
    int count=0;
    for(int i=0;i<length;i++){
        for(int j=0;j<size;j++){
            if(string[i]==num[j]){
                count++;
                break;
            }
        }
    } printf("trong xau co %d ky tu la chu cai", length-count);
    return 0;
}