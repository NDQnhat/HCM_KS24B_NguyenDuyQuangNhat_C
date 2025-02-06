#include <stdio.h>
int main()
{
    FILE *f;
    f=fopen("bt01.txt", "r");
    if(f==NULL){
        printf("mo khong duoc");
        return 1;
    } char str[100];
    if(fgets(str,100,f)!=NULL){
        printf("doc thanh cong");
    } 
//    printf("\n%s", str);
    fclose(f);
    return 0;
}