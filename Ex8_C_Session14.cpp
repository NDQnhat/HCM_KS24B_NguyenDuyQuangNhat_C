#include <stdio.h>
#include <ctype.h>
#include <cstring>
int main() {
    char string[]="konnichiwa sekai";
    int length=(int)strlen(string);
    printf("%s\n", string);
    for(int i=0;i<length;i++){
        string[0]=toupper(string[0]);
        if(string[i]==' '){                
            string[i+1] =toupper(string[i+1]);
        }
    }printf("%s", string);
    return 0;
}