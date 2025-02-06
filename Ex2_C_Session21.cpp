#include <stdio.h>
int main()
{
    FILE *f;
    f=fopen("bt01.txt", "r");
    if(f==NULL){
        printf("khaong the mo file");
        return 1;
    } else{
        char c;
        c=fgetc(f);
        printf("ky tu dau tien trong file: %c", c);
        fclose(f);
        return 0;
    }
}