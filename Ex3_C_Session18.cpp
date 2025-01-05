#include <stdio.h>
#include <cstring>
#include <stdlib.h>
struct sinhVien
{
    char name[100];
    int age;
    long phoneNumber;
};
int main() 
{
    struct sinhVien* sv=(struct sinhVien*)calloc(5,sizeof(struct sinhVien));
    printf("moi ban nhap thong tin tung sv:\n");
    for(int i=0;i<5;i++){
        printf("ten sv thu %d: ",i);
        scanf(" %[^\n]", (sv+i)->name);
        fflush(stdin);
        printf("tuoi sv thu %d: ",i);
        scanf("%d", &(sv+i)->age);
        fflush(stdin);
        printf("sdt sv thu %d: ", i);
        scanf("%ld", &(sv+i)->phoneNumber);
    } printf("thong tin da nhap: ");
    for(int i=0;i<5;i++){
        printf("\nten sv t%d: %s", i, (sv+i)->name);
        printf("\ntiou sv t%d: %d",i, (sv+i)->age);
        printf("\nsdt sv t%d: %ld", i, (sv+i)->phoneNumber);
        printf("\n");
    } free(sv);
    return 0;
}
