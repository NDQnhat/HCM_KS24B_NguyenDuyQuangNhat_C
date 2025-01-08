#include <stdio.h>
#include <cstring>
#include <stdbool.h>
struct dish
{
    int id;
    char name[50];
    int price;
};
void printMenu(struct dish *menu,int size)
{
    for(int i=0;i<size;i++){
        printf("%d. %s: %d\n", menu[i].id, menu[i].name, menu[i].price);
    }
};
void editElement(struct dish *menu, int size,int pos)
{
    printf("nhap id mon an: ");
    scanf("%d", &menu[pos].id);
    fflush(stdin);
    printf("nhap ten mon an: ");
    scanf(" %[^\n]", menu[pos].name);
    fflush(stdin);
    printf("nhap gia tien: ");
    scanf("%d", &menu[pos].price);
    fflush(stdin);
};
void addElement(struct dish *menu, int *size,int pos)
{
    if(pos<0){
        pos=0;
    }else if(pos>*size){
        pos=*size;
    } for(int i=*size;i>pos;i--){
        menu[i].id=menu[i-1].id;
        strcpy(menu[i].name,menu[i-1].name);
        menu[i].price=menu[i-1].price;
    } editElement(menu,*size,pos);
    *(size)++;  
};
void delElement(struct dish *menu,int *size,int pos)
{
    if(pos<0 || pos>*size){
        printf("vi tri khong hop le");
    }else{
        for(int i=pos; i<*size;i++){
            menu[i].id=menu[i+1].id;
            strcpy(menu[i].name, menu[i+1].name);
            menu[i].price=menu[i+1].price;
        }*(size)--;
    }
};
void arrangeElement(struct dish *menu,int size)
{
    char choice;
    printf("\na.giam dan theo price");
    printf("\nb. tang dan theo price");
    printf("\nnhap lua chon: ");
    fflush(stdin);
    scanf("%c", &choice);
    switch(choice)
    {
        case 'a':
            for(int i=0;i<size-1;i++){
                for(int j=0;j<size-1-i;j++){
                    if(menu[j].price<menu[j+1].price){
                        int tempCost=menu[j].price;
                        char tempName[50];
                        strcpy(tempName,menu[j].name);
                        int tempId=menu[j].id;
                        menu[j].id=menu[j+1].id;
                        strcpy(menu[j].name,menu[j+1].name);
                        menu[j].price=menu[j+1].price;
                        menu[j+1].id=tempId;
                        strcpy(menu[j+1].name,tempName);
                        menu[j+1].price=tempCost;
                    }
                }
            }
            break;
        case 'b':
            for(int i=0;i<size-1;i++){
                for(int j=0;j<size-1-i;j++){
                    if(menu[j].price>menu[j+1].price){
                        int tempCost=menu[j].price;
                        char tempName[50];
                        strcpy(tempName,menu[j].name);
                        int tempId=menu[j].id;
                        menu[j].id=menu[j+1].id;
                        strcpy(menu[j].name,menu[j+1].name);
                        menu[j].price=menu[j+1].price;
                        menu[j+1].id=tempId;
                        strcpy(menu[j+1].name,tempName);
                        menu[j+1].price=tempCost;
                    }
                }
            }
            break;
        default:
            printf("khong hop le");
            break;
    }
};
bool binarySearch(struct dish *menu, char *element, int left, int right)
{
    if(left<=right){
        int mid=left+(right-left)/2;
        if(strcmp(menu[mid].name,element)==0){
            return true;
        }else if(strcmp(menu[mid].name,element)>0){
            return binarySearch(menu,element,left,mid-1);
        }else {
            return binarySearch(menu,element,mid+1,right);
        }
    } return false;
};
bool searchElement(struct dish *menu, char *element,int size)
{
    printf("\na.tim kiem tuyen tinh");
    printf("\nb. tim kiem nhi phan ");
    char choose;
    printf("\nlua hcon cua ban: ");
    fflush(stdin);
    scanf("%c", &choose);
    switch(choose)
    {
        case 'a':
            for(int i=0;i<size;i++){
                if(strcmp(menu[i].name,element)==0){
                    return true;
                }
            } return false;
        case 'b':
            return binarySearch(menu,element,0,size-1);
        default:
            printf("khong hop le");
            break;
    }
};
int main()
{
    struct dish menu[100]=
    {
        {1, "mon an bi an", 100000},
        {2, "mon an hu thoi", 50000},
        {3, "mon an khong ten", 10000},
        {4, "do an thua", 5000},
        {5, "hit khong khi", 99999}
    };
    while(1)
    {
        printf("\n====================MENU======================\n");
        printf("1. in gia tri cac phan tu co trong menu mon an\n");
        printf("2.them 1 phan tu vao vtri chi dinh\n");
        printf("3. sua 1 phantu o vtri chi dinh\n");
        printf("4. oax 1 pha tu o vtri chi dinh\n");
        printf("5. sap xep cac phan tu\n");
        printf("6. tim kiem phan tu theo ten nahp vo\n");
        printf("7. thoat\n");
        printf("lua chon cua ban: ");
        int command,size=5,pos;
        scanf("%d", &command);
        switch(command)
        {
            case 1:
                printMenu(menu,size);
                break;
            case 2:
                printf("nhap vi tri can them: ");
                scanf("%d", &pos);
                addElement(menu,&size,pos);
                break;
            case 3:
                printf("nhap vtri can sua: ");
                scanf("%d", &pos);
                editElement(menu,size,pos);
                break;
            case 4:
                printf("nhap avi tri can del: ");
                scanf("%d", &pos);
                delElement(menu,&size,pos);
                break;
            case 5:
                arrangeElement(menu,size);
                break;
            case 6:
            {
                fflush(stdin);
                char element[50];
                printf("nhap vao ten phan tu can tim: ");
                scanf(" %[^\n]", element);
                fflush(stdin);
                if(searchElement(menu,element,size)){
                    printf("%s co trong menu", element);
                }else{
                    printf("%s khong co trong  menu", element);
                } break;
            }
            case 7:
                printf("\nban da thoat cahuong trinh");
                return 0;
            default: 
                printf("\nlua chon khong hop le");
        }
    }return 0;
}