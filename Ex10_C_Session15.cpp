#include <stdio.h>
#include <cstring>
int main() 
{
    char str[] = "goodbye world";
    int count;
    char chr;
    for (int i = 0; i < strlen(str); i++) {
        count = 1;
        if (str[i] == -1) continue;
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = -1;
            }
        }printf("%c: %d\n", str[i], count);
    }return 0;
}
