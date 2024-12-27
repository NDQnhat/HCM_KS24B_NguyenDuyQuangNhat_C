#include<stdio.h>
#include <string.h>
int main() {
    char string[]="bye bye world";
    int length=(int)strlen(string);
    char temp[length+1];
    int index=0;
    for (int i=length-1;i>=0;i--){
        temp[index]=string[i];
        index++;
    } temp[index]='\0';
    index=0;
    for(int i=0;i<length;i++){
        string[i]=temp[index];
        index++;
    } printf("%s", string); 
    return 0;
}
