#include <stdio.h>
#include <cstring>
int main() {
	char input[999];
	printf("nhap 1 chuoi bat ki: ");
	gets(input);
	printf("do dai chuoi vau nhap: %d", strlen(input));
	return 0;
}
