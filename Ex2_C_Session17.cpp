#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <stdlib.h>
void inputString(char *string)
{
    printf("nhap vao chuoi bat ky: ");
    fgets(string,100,stdin);
    fflush(stdin);
};
void printString(char *string)
{
    printf("chuoi da nhap: %s", string);
}
int countChar(char *string)
{
    int count=0;
    for(int i=0;i<strlen(string);i++){
        if(isalpha(*(string+i))){
            count++;
        }
    } return count;
};
int countNum(char *string)
{
    int dem=0;
    for(int i=0;i<strlen(string);i++){
        if(isdigit(*(string+i))){
            dem++;
        }
    } return dem;
};
int countSpec(char *string)
{
    int Count=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]>=32 && string[i]<=47 || *(string+i)>=58 && *(string+i)<=64 ||string[i]>=94 &&string[i]<=96 || *(string+i)>=123 &&string[i]<=126){
            Count++;
        }
    }return Count;
};
int main() 
{
    int command;
    char *string;
    string=(char*)calloc(100,sizeof(char));
    while(1)
    {
        printf("\n===========MENU==========\n");
        printf("1.nhap vao chuoi");
        printf("\n2.in ra chuoi\n");
        printf("3.dem so luong chu cai trong chuoi va in ra\n");
        printf("4.dem so luong chu so trong chuoi va in ra\n");
        printf("5.dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6.thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &command);
        fflush(stdin);
        switch(command)
        {
            case 1:
                inputString(string);
                break;
            case 2:
                printString(string);
                break;
            case 3:
                printf("so luong chu cai trong chuoi: %d", countChar(string));
                break;
            case 4:
                printf("so luong ky tu so: %d", countNum(string)); 
                break;
            case 5:
                printf("so luong ky tu dac biet trong mang: %d", countSpec(string));
                break;
            case 6:
                printf("ban da thoat chuong trinh");
                return 0;
            default:
                printf("khong hop le nhap lai");
        }
    }free(string);
    return 0;
}