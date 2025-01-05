#include <stdio.h>
#include <cstring>
struct sinhVien
{
    char name[100];
    int age;
    long long phoneNumber;
};
int main() 
{
    struct sinhVien sv1;
    printf("nhap ten SV: ");
    char inputName[100];
    fgets(inputName,sizeof(inputName),stdin);
    strcpy(sv1.name,inputName);
//  scanf(" %[^\n]", sv1.name);
    printf("nhap tuoi SV: ");
    scanf("%d", &sv1.age);
    printf("nhap sdt SV: ");
    scanf("%lld", &sv1.phoneNumber);
    printf("\ndu liewu da nhap: ");
    printf("\nten SV: %s", sv1.name);
    printf("\ntuoi SV: %d", sv1.age);
    printf("\nsdt SV: %lld", sv1.phoneNumber);
    return 0;
}
