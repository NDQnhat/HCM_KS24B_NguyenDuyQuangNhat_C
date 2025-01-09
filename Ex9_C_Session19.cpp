#include <stdio.h>
#include <cstring>
struct student
{
    char id[10];
    char name[25];
    int age;
    char phoneNum[11];
};
void printList(struct student *sv, int size)
{
    for(int i=0;i<size;i++){
        printf("%s  %s   %d  %s", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNum);
        printf("\n");
    }
};
void addStudent(struct student *sv, int *size)
{
    
    printf("nhap id sv can them: ");
    scanf(" %[^\n]", sv[*size].id);
    printf("nhap ten sv: ");
    scanf(" %[^\n]", sv[*size].name);
    printf("nhap tuoi sv: ");
    scanf(" %[^\n]", &sv[*size].age);
    printf("nhap sdt sv: ");
    scanf(" %[^\n]", sv[*size].phoneNum);
    (*size)++;
};
void editStudent(struct student *sv,int size,char *id)
{
    int index;
    for(int i=0;i<size;i++){
        if(strcmp(id,sv[i].id)==0){
            index=i;
            break;
        }
    } printf("nhap id moi: ");
    scanf(" %[^\n]", sv[index].id);
    printf("nhap ten sv moi: ");
    scanf(" %[^\n]", sv[index].name);
    printf("nhap tuoi sv nay: ");
    scanf(" %[^\n]", &sv[index].age);
    printf("nhap sdt sv moi: ");
    scanf(" %[^\n]", sv[index].phoneNum);
}
void delStudent(struct student *sv,int *size,char *id)
{
    for(int i=0;i<*size;i++){
        if(strcmp(sv[i].id,id)==0){
            for(int t=i;t<*size;t++){
                sv[t]=sv[t+1];
            }
        }
    } (*size)--;
};
int searchStudent(struct student *sv, int size, char *id)
{
    for(int i=0;i<size;i++){
        if(strcmp(sv[i].id,id)==0){
            return 1;
        }
    } return 0;
};
void arrangeList(struct student *sv,int size)
{
    struct student temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(strcmp(sv[j].name,sv[j+1].name)>0){
                temp=sv[j];
                sv[j]=sv[j+1];
                sv[j+1]=temp;
            }
        }
    }
};
int main()
{
    struct student sv[50]=
    {
        {"N24-1", "Tran Van A", 18, "0123456789"},
        {"N24-2", "Tran Thi A", 19, "0987654321"},
        {"N24-3", "Nguyen Van A", 17, "0258963147"}
    };
    int size=3;
    while(1)
    {
        printf("\n=================MENU==================\n");
        printf("1.Hien thi dssv\n");
        printf("2.them sinh vien\n");
        printf("3.sua thoong tin sv\n");
        printf("4.xoas sinh vien\n");
        printf("5.tim kiem sinh vien\n");
        printf("6.sap xep dssv\n");
        printf("7.thaot\n");
        printf("lua chon cua ban: ");
        int command;
        char id[10];
        scanf("%d", &command);
        switch(command)
        {
            case 1:
                printList(sv,size);
                break;
            case 2:
                addStudent(sv,&size);
                printf("\nthem thanh cong");
                break;
            case 3:
                printf("\nnhap id sv can sua: ");
                scanf(" %[^\n]", id);
                editStudent(sv,size,id);
                printf("\nsua thanh cong");
                break;
            case 4:
                printf("\nnhap id sv can del: ");
                scanf(" %[^\n]", id);
                delStudent(sv,&size,id);
                printf("\nxoa thanh cong");
                break;
            case 5:
                printf("\nnhap id sv can tim: ");
                scanf(" %[^\n]", id);
                if(searchStudent(sv,size,id)){
                    printf("\nid sinh vien co trong danh sach");
                }else{
                    printf("\nid sv khong co trong ds");
                }
                break;
            case 6:
                arrangeList(sv,size);
                printf("\nsap xep thanh cong");
                break;
            case 7:
                printf("\nban da ot ctrinh");
                return 0;
            default:
                printf("\nkhong hop le moi nhap lai");
                break;
        }
    }return 0;
}