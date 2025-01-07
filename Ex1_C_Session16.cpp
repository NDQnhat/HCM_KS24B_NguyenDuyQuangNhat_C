#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int a=0;
    int *aPtr=&a;
    printf("gtri: %d, dia chi: %lu\n", a, (unsigned long)&a);
    printf("gtri: %d, dia chi: %lu\n", *aPtr, (unsigned long)aPtr);
    return 0;
}
/*#include <stdio.h>
int main() 
{
    int a=0;
    int *aPtr=&a;
    printf("gtri: %d, dia chi: %p\n", a, &a);
    printf("gtri: %d, dia chi: %p\n", *aPtr, aPtr);
    return 0;
}*/
