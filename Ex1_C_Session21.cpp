#include <stdio.h>
int main()
{
    FILE *f;
    f=fopen("bt01.txt", "w");
    char str[99];
    scanf(" %[^\n]", str);
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}