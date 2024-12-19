#include <stdio.h>
int main() {
	while(1){
		printf("\nMENU\n");
		printf("1.Nhap vao mang\n");
		printf("2.Hien thi mang\n");
		printf("3.Them phan tu\n");
		printf("4.Sua phan tu\n");
		printf("5.Xoa phan tu\n");
		printf("6.Thoat\n");
		printf("lua chon cua ban: ");
		int choose;
		scanf("%d", &choose);
		int currentLength,array[100];
		int position,n;
		switch(choose) {
			case 1:
				printf("nhap so phan tu muon nhap: ");
				scanf("%d", &currentLength);
				for(int i=0;i<currentLength;i++){
					printf("array[%d]= ",i);
					scanf("%d", &array[i]);
				} break;
			case 2:
				for(int i=0;i<currentLength;i++) {
					printf("%d ",array[i]);
				}  break;
			case 3:
				printf("nhap vi tri muon them phan tu: ");
				scanf("%d", &position);
				printf("nhap phan tu muon them: ");
				scanf("%d", &n);
				for(int i=currentLength;i>position;i--){
					array[i]=array[i-1];
				} currentLength++;
				array[position]=n;
				break;
			case 4:
				printf("nhap vij tri muon sua: ");
				scanf("%d", &position);
				printf("nhap gia tri sua: ");
				scanf("%d", &n);
				array[position]=n;
				break;
			case 5:
				printf("nhap vi tri can xosa: ");
				scanf("%d", &position);
				for(int i=position;i<currentLength;i++){
					array[i]=array[i+1];
				} currentLength--;
				break;
			case 6:
				return 0;
		} 
	}
} 
