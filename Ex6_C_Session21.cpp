#include <stdio.h>
int main()
{
    FILE *f1=fopen("bt01.txt", "r");
    FILE *f2=fopen("bt06.txt", "w");
    if(f1==NULL){
        printf("bt01.txt mo khong duoc");
        return 1;
    } if(f2==NULL){
        printf("bt06.txt khong mo duoc");
        return 1;
    } char temp[100];
    while(fgets(temp,100,f1)!=NULL){
        fputs(temp,f2);
    } printf("copy done");
    fclose(f1);
    fclose(f2);
    return 0;
}