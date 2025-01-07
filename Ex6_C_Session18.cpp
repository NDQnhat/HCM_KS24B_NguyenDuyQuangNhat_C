#include <stdio.h>
struct student
{
    char id[10];
    char name[30];
    int age;
    char phoneNum[11];
};
void addStudent(struct student *sv)
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
int main()
{
    struct student sv[50]
    {
        {"N2024-1", "NTH", 18, "0147852369"},
        {"N2024-2", "BLN", 18, "0258741369"},
        {"N2024-3", "HTH", 18, "0369852147"},
        {"N2024-4", "CTY", 99, "0123654789"},
        {"N2024-5", "HHN", 88, "0159874236"}
    };
//  int index=sizeof(sv)/sizeof(struct student);
    int index=5;
    addStudent(&sv[index]);
    index++;
    for(int i=0;i<index;i++){
        printf("%-5s %-20s %-30d %-35s", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNum);
        printf("\n");
    }return 0;
}