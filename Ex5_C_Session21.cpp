#include <stdio.h>
int main() 
{
    FILE *file;
    file=fopen("bt05.txt", "w");
    if(file==NULL){
        printf("mo khong thanh cong");
        return 1;
    }
    int n;
    printf("soo dong can nhap: ");
    scanf_s("%d", &n);
    for(int i=0;i<n;i++){
        char temp[100];
        printf("du lieu dong thu %d: ", i+1);
        scanf(" %[^\n]", temp);
//      fputs(temp,file);
        fprintf(file, "%s\n", temp);
    } fclose(file);
    return 0;
}