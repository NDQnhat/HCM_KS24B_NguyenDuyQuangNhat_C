#include <stdio.h>
#include <cstring>
struct student
{
    char id[10];
    char name[30];
    int age;
    char phoneNum[11];
};
void arrangeByName(struct student *sv, int size)
{
    struct student temp;
    for(int i=0;i<size;i++){
        strrev(sv[i].name);
    } for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(strcmp(sv[j].name,sv[j+1].name)>0){
                temp = sv[j]; 
                sv[j] = sv[j+1]; 
                sv[j+1] = temp;
            }
        }
    }for(int i=0;i<size;i++){
        strrev(sv[i].name);
    }
};

int main()
{
    struct student sv[50]=
    {
        {"N2024-1", "Nguyen Van A", 18, "0147852369"},
        {"N2024-2", "Le Van E", 18, "0258741369"},
        {"N2024-3", "Tran Van M", 18, "0369852147"},
        {"N2024-4", "Nguyen Thi A", 99, "0123654789"},
        {"N2024-5", "Tran Thi C", 88, "0159874236"}
    };
    int size=5;
    printf("dssv ban dau:\n");
    for(int i=0;i<size;i++){
        printf("%-5s %-20s %-30d %-35s", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNum);
        printf("\n");
    } arrangeByName(sv,size);
    printf("\ndssv sau sap xep theo name\n");
    for(int i=0;i<size;i++){
        printf("%-5s %-20s %-30d %-35s", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNum);
        printf("\n");
    } return 0;
}