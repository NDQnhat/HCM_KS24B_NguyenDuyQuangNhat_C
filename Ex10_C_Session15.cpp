#include <stdio.h>
#include <cstring>
int main() 
{
    char str[] = "goodbye world";
    int count;
    char chr;
    for (int i = 0; i < strlen(str); i++) {
        count = 1;
        if (str[i] == '\0') continue;
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '\0';
            }
        }printf("%c: %d\n", str[i], count);
    }return 0;
}
