#include <stdio.h>
#include <cstring>
struct student
{
    char id[10];
    char name[30];
    int age;
    char phoneNum[11];
};
void delStudent(struct student *sv,char *id)
{
    int size=5;
    int pos=-1;
    for(int i=0;i<size;i++){
        if(strcmp(sv[i].id,id)==0){
            pos=i;
            break;
        }
    }if(pos==-1){
        printf("khong tim thay sv");
    }else{
        for(int i=pos;i<size-1;i++){
            strcpy(sv[i].id, sv[i + 1].id); 
            strcpy(sv[i].name, sv[i + 1].name); 
            sv[i].age = sv[i + 1].age; 
            strcpy(sv[i].phoneNum, sv[i + 1].phoneNum);
        }
		strcpy(sv[size-1].id, ""); 
        strcpy(sv[size-1].name, ""); 
        sv[size-1].age = -1; 
        strcpy(sv[size-1].phoneNum, ""); 
    }
};
void printStudent(struct student *sv, int size)
{
    for(int i=0;i<size;i++){
        if(strcmp(sv[i].id,"")!=0){
            printf("%-5s %-20s %-30d %-35s", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNum);
            printf("\n");
        }
    }
};
int main()
{
    struct student sv[50]=
    {
        {"N2024-1", "NTH", 18, "0147852369"},
        {"N2024-2", "BLN", 18, "0258741369"},
        {"N2024-3", "HTH", 18, "0369852147"},
        {"N2024-4", "CTY", 99, "0123654789"},
        {"N2024-5", "HHN", 88, "0159874236"}
    };
    char id[10];
    int size=5;
    printf("nhap id sinh vien can xoa: ");
    scanf(" %[^\n]", id);
    delStudent(sv,id);
    printf("\ndssv sau xoa: \n");
    printStudent(sv,size);
    return 0;
}
