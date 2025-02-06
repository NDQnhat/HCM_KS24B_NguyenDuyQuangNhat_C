#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    file =fopen("bt01.txt", "a");
    if(file==NULL){
        printf("khong the mo file");
        exit(1);
    } char input[100];
    scanf(" %[^\n]", input);
    fprintf(file, "%s", input);
    fclose(file);
    return 0;
}