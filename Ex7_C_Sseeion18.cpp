#include <stdio.h>
#include <string.h>
struct student
{
    char id[10];
    char name[30];
    int age;
    char phoneNum[11];
};
void delStudent(struct student *sv,int index,int size)
{
    for(int i=index;i<size-1;i++){
        strcpy(sv[i].id, sv[i + 1].id); 
        strcpy(sv[i].name, sv[i + 1].name); 
        sv[i].age = sv[i + 1].age; 
        strcpy(sv[i].phoneNum, sv[i + 1].phoneNum);
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
//  int size=sizeof(sv)/sizeof(struct student);
    int index=-1,size=5;
    char name[50];
    printf("nhap ten sinh vien can xoa: ");
    scanf(" %[^\n]", name);
    for(int i=0;i<size;i++){
        if(strcmp(sv[i].name,name)==0){
            index=i;
            break;
        }
    }if(!index){
        printf("khong tim thay trong ds");
    }else{
        delStudent(sv, index, size);
    } size--;
    for(int i=0;i<size;i++){
        printf("%-5s %-20s %-30d %-35s", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNum);
        printf("\n");
    }return 0;
}