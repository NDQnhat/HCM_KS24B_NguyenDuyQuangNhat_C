#include <stdio.h>
#include <cstring>
int main() {
    char string[]="ni hao shijie";
    int length=(int)strlen(string);
    char n;
    printf("%s\n",string);
    printf("nhap 1 kys tu muon del: ");
    n=getchar();
    for(int i=0;i<length;i++){
        if(string[i]==n){
            for(int j=i;j<length;j++){
                string[j]=string[j+1];
            }length--;
        }
    } printf("\n%s",string);
    return 0;
}