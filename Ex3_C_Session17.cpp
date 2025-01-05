#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <stdlib.h>
/*char *string=(char*)malloc(100*sizeof(char));
char *str=(char*)calloc(100,sizeof(char));
char *STR=(char*)calloc(100,sizeof(char));*/
char string[100];
char str[100];
char STR[100];
void inputString(char *string)
{
    printf("mois ban nhap chuoi: ");
    fgets(string,100,stdin);
    fflush(stdin);
};
void printRevStr(char *string)
{
    for(int i=0;i<strlen(string)/2;i++){
        int temp=*(string+i);
        *(string+i)=*(string+strlen(string)-i-1);
        *(string+strlen(string)-i-1)=temp;
    }printf("chuoi sau dao nguoc: %s",string);
};
int countWord(char *string)
{
    int count=1;
    for(int i=0;i<strlen(string);i++){
        if(*(string+i)==' '){
            count++;
        }
    }return count;
};
int compareString(char *string,char *str)
{
    printf("moi bajn nhap chuoi 2: ");
    fgets(str,100,stdin);    
    fflush(stdin);
    //return strcmp(string,str);
    if(strlen(string)>strlen(str)){
        return 1;
    }else if (strlen(string)<strlen(str)) {
        return -1;
    }else {
        return 0;
    }    
};
void upperString(char *string)
{
    for(int i=0;i<strlen(string);i++){
        *(string+i)=toupper(*(string+i));
    }printf("chuoi sau in hoa: %s", string);
};
void catenateString(char *string, char *STR)
{
    printf("nhap chuoi thu can noi vao: ");
    fgets(STR,100,stdin);
    printf("moi ban chon:\n");
    printf("1.noi 2 chuoi lien nhau\n");
    printf("2.noi chuoi cach nhau\n");
    printf("chon nao: ");
    int choice;
    scanf("%d", &choice);
    fflush(stdin);
    switch(choice)
    {
        //string=(char*)realloc(string,100*2);
        case 1:
            strcat(string,STR);
            printf("chuoi da noi: %s",string);
            break;
        case 2:
            strcat(string," ");
            strcat(string,STR);
            printf("chuoi da noi: %s",string);
            break;
        default:
            printf("khong hop le");
    }
};
int main()
{
    int command;
    do
    {
        printf("\n==========MENU==========\n");
        printf("1.Nhap vao chuoi\n");
        printf("2.In ra chuoi dao nguoc\n");
        printf("3.Dem so luong tu trong chuoi\n");
        printf("4.Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("5.In hoa tat ca chu cai trong chuoi\n");
        printf("6.Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
        printf("7.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &command);
        fflush(stdin);
        switch(command)
        {
            case 1:
                inputString(string);
                break;
            case 2:
                printRevStr(string);
                break;
            case 3:
                printf("so luong tu trong vhuoi: %d",countWord(string));
                break;
            case 4: 
            {
                int check=compareString(string,str);
                if(check==0){
                    printf("2 chuoi bang nhau");
                }else if (check>0) {
                    printf("chuoi ban dau dai hon");
                }else{
                    printf("chuoi ban dau ngan hon");
                } break;
            }
            case 5:
                upperString(string);
                break;
            case 6:
                catenateString(string,STR);
                break;
            case 7:
                printf("ban da thoat chuong trinh");
                break;
            default:
                printf("khong hop le nhap lai");
                break;
        }
    } while (command!=7);
    //free(string); free(str); free(STR);
    return 0;
}
