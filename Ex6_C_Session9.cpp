#include <stdio.h>
int main() {
	while(1) {
		printf("\nMENU\n");
		printf("1.nhap kich co va giati cac phan tu cua mang\n");
		printf("2.in gia tri phan tu cua mang theo ma tran\n");
		printf("3.in gia tri phan tu le va tinh tong\n");
		printf("4.in ra cac phan tu nam tren bien va tinh tich\n");
		printf("5.in rq cac phan tu nam tren duong cheo chinh\n");
		printf("6.in ra cac phan tu nam tren duong cheo phu\n");
		printf("7.in ra dong co tong cac gia tri phan tu la lon nhat\n");
		printf("8.thoat");
		printf("\nlua chon cua ban: ");
		int arr[100][100];
		int choose,x,y,sum=0,product=1,sumMax=0,temp,row;
		scanf("%d", &choose);
		switch(choose){
			case 1:
				printf("\nnhap so hang va cot cua mang: ");
				scanf("%d%D", &x,&y);
				printf("nhap cac phan tu cua mang: \n");
				for (int i=0;i<x;i++){
					for(int j=0;j<y;j++){
						printf("arr[%d][%d]= ", i,j);
						scanf("%d", &arr[i][j]);
					}
				} break;
			case 2:
				printf("\n mang theo ma tran: \n");
				for (int i=0;i<x;i++){
					for(int j=0;j<y;j++){
						printf("%d ",arr[i][j]);
					} printf("\n");
				} break;
			case 3:
				printf("\n cac phan tu le: ");
				for (int i=0;i<x;i++){
					for(int j=0;j<y;j++){
						if(arr[i][j]%2!=0){
							printf("%d ",arr[i][j]);
							sum+=arr[i][j];
						}
					}
				} printf("\n tong cac phan tu le: %d", sum);
				break;
			case 4:
				printf("\n cac phan tu tren bien: ");
				for (int i=0;i<x;i++){
					for(int j=0;j<y;j++){
						if(i==0||j==0||i==x-1||j==y-1){
							printf("%d ",arr[i][j]);
							product*=arr[i][j];
						}
					}
				} printf("\ntich cac phan tu tren birn: %d",product);
				break;
			case 5:
				if(x!=y){
					printf("\n ma tran hkong vuong kh co duong cheo chinh");
				} else {
					printf("\n cac phan tu tren duong cheo chinh: ");
					for (int i=0;i<x;i++){
						for(int j=0;j<y;j++){
							if(i==j){
								printf("%d ",arr[i][j]);
							}
						}
					}
				}break;
			case 6:
				if(x!=y){
					printf("\n ma tran hkong vuong kh co duong cheo phu");
				} else {
					printf("\n cac phan tu tren duong cheo phu: ");
					for (int i=0;i<x;i++){
						for(int j=0;j<y;j++){
							if(i+j+1==x||i+j+1==y){
								printf("%d ",arr[i][j]);
							}
						}
					}
				}break;
			case 7:
				printf("\n dong co tong gia tri cac phan tu lon nhat: ");
				for (int i=0;i<x;i++){
					temp=0; 
					for(int j=0;j<y;j++){
						temp+=arr[i][j];
					}
					if(sumMax<temp){
						sumMax=temp;
						row=i;
					}
				} printf("\n dong co gia tri lon nhat: %d", row);
				printf("\n cac phan tu dong lon nhat: ");
				for(int j=0;j<y;j++){
					printf("%d", arr[row][j]);
				} 
				break;
			case 8:
				return 0;
			default:
				printf("Khong hpo le");
		}
	}return 0;
}
