#include <stdio.h>
#include <string.h>
struct student
{
    char id[10];
    char name[30];
    int age;
    char phoneNum[11];
};
void inputData(struct student *sv)
{
    printf("nhap id sinh vien: ");
    scanf(" %[^\n]", sv->id);
    printf("nhap ten sihn vien: ");
    scanf(" %[^\n]", sv->name);
    printf("nhap tuoi: ");
    scanf("%d", &sv->age);
    printf("nhap sdt: ");
    scanf(" %[^\n]", sv->phoneNum);
};
void insertStudent(struct student *sv,int index, int size)
{
    if(index<0){
        index=0;
        for(int i=size;i>0;i--){
            strcpy(sv[i].id, sv[i-1].id); 
            strcpy(sv[i].name, sv[i-1].name); 
            sv[i].age = sv[i-1].age; 
            strcpy(sv[i].phoneNum, sv[i-1].phoneNum);
        } inputData(&sv[index]);
    }else if(index>size){
        inputData(&sv[size]);
    }else{
        for(int i=size;i>index;i--){
            strcpy(sv[i].id, sv[i-1].id); 
            strcpy(sv[i].name, sv[i-1].name); 
            sv[i].age = sv[i-1].age; 
            strcpy(sv[i].phoneNum, sv[i-1].phoneNum);
        } inputData(&sv[index]);
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
    int index, size=5;
    printf("nhap vi tri can them: ");
    scanf("%d", &index);
    printf("nhap du loieu vao:\n");
    insertStudent(sv,index,size);
    size++;
    for(int i=0;i<size;i++){
        printf("%-5s %-20s %-30d %-35s", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNum);
        printf("\n");
    }return 0;
}