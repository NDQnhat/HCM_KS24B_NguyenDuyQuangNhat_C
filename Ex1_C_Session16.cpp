#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int a=0;
    int *aPtr=&a;
    printf("gtri: %d, dia chi: %ld\n", a, (unsigned long)&a);
    printf("gtri: %d, dia chi: %ld\n", *aPtr, (unsigned long)aPtr);
    return 0;
}
/*#include <stdio.h>
int main() 
{
    int a=0;
    int *aPtr=&a;
    printf("gtri: %d, dia chi: %p\n", a, (void*)&a);
    printf("gtri: %d, dia chi: %p\n", *aPtr, (void*)aPtr);
    return 0;
}*/