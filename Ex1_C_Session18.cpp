#include <stdio.h>
struct sinhVien
{
    char name[100];
    int age;
    long long phoneNumber;
};
int main() 
{
    struct sinhVien sv1={"Nguyen van A", 100, 1234567890 };
    printf("ten SV: %s\n", sv1.name);
    printf("tuoi SV: %d\n", sv1.age);
    printf("sdt SV: %lld\n", sv1.phoneNumber);
    return 0;
}
