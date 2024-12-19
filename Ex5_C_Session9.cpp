#include <stdio.h>
#include <math.h>
int main() {
	int array[100];
	while(1){
		printf("\nMENU\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan li\n");
		printf("3.In ra gia tri cac phan tu chan va tinh tong\n");
		printf("4.In ra gia tri lon nhat va nho nhat trong mang: \n");
		printf("5.In ra cac phna tuu la so nfuyen to trong mang va tinh tong\n");
		printf("6.Nhap 1 so va thong ke trong mang co bao nhieu phan tu do\n");
		printf("7.Them 1 phan tu vao vi tri chi dinh\n");
		printf("8.Thoat\n");
		printf("Luu cohn cua nbna: ");
		int function;
		scanf("%d", &function);
		int currentLength,sum=0,max=array[0],min=array[0],flag,sum1=0,position,value,num,count=0;
		switch(function){
			case 1:
				printf("nhap so phan tu can nhap: ");
				scanf("%d", &currentLength);
				printf("nhap gia tri phan tu: \n");
				for(int i=0;i<currentLength;i++){
					printf("array[%d]= ",i);
					scanf("%d", &array[i]);
				} break;
			case 2:
				printf("\nCac phan tu dang quan li: ");
				for(int i=0;i<currentLength;i++){
					printf("%d ", array[i]);
				} break;
			case 3:
				printf("\nCac phan tu la so chan: ");
				for(int i=0;i<currentLength;i++){
					if(array[i]%2==0){
						printf("%d ", array[i]);
						sum+=array[i];
					}
				} printf("\nTong phan tu chna: %d", sum);
				break;
			case 4:
				for(int i=0;i<currentLength;i++){
					if(array[i]>max){
						max=array[i];
					}
				}for (int i=0;i<currentLength;i++ ) {
					if(min>array[i]){
						min=array[i];
					}
				} printf("\nGia tri lon nhat: %d, Gia tri nho nhat: %d",max, min);
				break;
			case 5:
				printf("\nCac phan tu la so nguyrn toos: ");
				for(int i=0;i<currentLength;i++){
					if(array[i]<2){
						continue;
					} 
					flag=1;
					for(int j=2;j<=sqrt(array[i]);j++){
						if(array[i]%j==0){
							flag=0;
							break;
						}
					} if(flag){
						printf("%d ", array[i]);
						sum1+=array[i];
					}
				} printf("\nTong cac so nguyen toos: %d",sum1);
				break;
			case 6:
				printf("\nNhap 1 so: ");
				scanf("%d", &num);
				for(int i=0;i<currentLength;i++) {
					if(array[i]==num){
						count++;
					}
				} printf("so lan ohan tu %d cuat hien: %d", num,count);
				break;
			case 7:
				printf("\nNhap vi tri muon them phan tu: ");
				scanf("%d", &position);
				printf("nhap giai tri muon them: ");
				scanf("%d", &value);
				for(int i=currentLength+1;i>position;i--){
					array[i]=array[i-1];
				} currentLength++;
				array[position]=value;
				break;
			case 8:
				return 0;
		}
	} return 0;
}
