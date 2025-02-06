#include <stdio.h>

struct student
{
    char ID[6];
    char name[30];
    int age;
};
// nhap thong tin sinh vien
void inputStudent(struct student *stu, int _size)
{
    for(int i=0;i<_size;i++){
        printf("id sv: ");
        scanf(" %[^\n]", (stu+i)->ID);
        fflush(stdin);
        printf("ten sv: ");
        scanf(" %[^\n]", (stu+i)->name);
        fflush(stdin);
        printf("tuoi sv: ");
        scanf("%d", &stu[i].age);
        fflush(stdin);
    }
};

// tao file student.txt va luu thong tin
void addstudentToFile(struct student *Sv, int Size)
{
    FILE *f=fopen("students.txt","w");
    if(f==NULL){
        printf("khong mo dc");
        return ;
    }
    for(int i=0;i<Size;i++){
        fprintf(f, "ID: %s\n", Sv[i].ID);
        fprintf(f, "Ten: %s\n", Sv[i].name);
        fprintf(f, "Tuoi: %d\n", Sv[i].age);
        fprintf(f, "\n");
    } fclose(f);
}

int main()
{
    int size;
    printf("so luong sinh vien: ");
    scanf("%d", &size);
    fflush(stdin);
    struct student sv[size];
    printf("moi nhap thong tin sinh vien\n");
    inputStudent(sv,size);
    addstudentToFile(sv,size);
    return 0;
}