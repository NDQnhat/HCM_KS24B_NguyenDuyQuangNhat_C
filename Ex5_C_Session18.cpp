#include <stdio.h>
struct sinhVien
{
    int id;
    char name[100];
    int age;
    char phoneNum[11];
};
void updateAndPrint(struct sinhVien *sv);
int main()
{
    struct sinhVien sv[50]={{1,"Nguyen Van A",18, "0147852369"},{2,"Nguyen Thi B",19,"0123456789"},{3,"Tran Van C",20,"0321456987"},{4, "Nguyen Thi D", 15, "0987456321"},{5,"Tran Tran Tran",15,"0987654321"}};
    int ID,flag=0;
    printf("nhap ID sv can sua tt: ");
    scanf("%d", &ID);
    for(int i=0;i<3;i++){
        if(ID==sv[i].id){
            updateAndPrint(&sv[i]);
            flag=1;
            break;
        }
    }if(!flag){
        printf("ID khong ton ati");
    }
    return 0;
}
void updateAndPrint(struct sinhVien *sv)
{
    printf("nhap aten can doi: ");
    scanf(" %[^\n]", sv->name);   
    printf("nhap tuoi can doi: ");
    scanf("%d", &sv->age);
    printf("nhap sdt doi: ");
    scanf(" %[^\n]", sv->phoneNum);
    printf("\n\nthong tin sv sau upd:\n");
    printf("ID: %d\nTen sv: %s\nTuoi: %d\nSdt: %s", sv->id, sv->name, sv->age, sv->phoneNum);
};
/* ********************************************************************************************** 
THẦY SỬA GIUP EM LOGIC DUOI NAY DUOC KHONG

#include <stdio.h>
#include <cstring>
struct sinhVien
{
    char ID[10];
    char name[100];
    int age;
};
void updateAndPrint(struct sinhVien sv);
int main()
{
    char ID[10];
    int flag=0;
    struct sinhVien sv[3]=
    {
        {"N24-1","NTH", 18},
        {"N24-2", "TNMD", 19},
        {"N24-3", "YVTLT", 20}
    };
    printf("nhap ID sv cna upd: ");
    scanf("%s", ID);
    for(int i=0;i<3;i++){
        if(strcmp(ID,sv[i].ID)==0){
            sv[i]=updateAndPrint(sv[i]);
            flag=1;
            break;
        }
    }if(!flag){
        printf("\nkhong tim thay ID");
    }return 0;
}
struct sinhVien updateAndPrint(struct sinhVien sv)
{
    printf("nhap aten can doi: ");
    scanf(" %[^\n]", sv.name);   
    printf("nhap tuoi can doi: ");
    scanf("%d", &sv.age);
    printf("\n\nthong tin sv sau upd:\n");
    printf("ID: %s\nTen sv: %s\nTuoi: %d", sv.ID, sv.name, sv.age);
};
*************************************************************************************** */