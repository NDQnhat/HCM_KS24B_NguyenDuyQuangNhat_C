#include <stdio.h>
#include <math.h>
#define MAX 100
void inputArr(int arr[MAX][MAX], int row, int col);
void printArr(int arr[MAX][MAX], int row, int col);
void inGocTheoMatrix(int arr[MAX][MAX], int row, int col);
void inBienTheoMatrix(int arr[MAX][MAX], int row, int col);
void inCheoChinhPhuTheoMatrix(int arr[MAX][MAX], int row, int col);
int checkPrime(int num);
void printPrime(int arr[MAX][MAX], int row, int col);
int main() {
    int a, b;
    printf("Nhap so hang cot ma tran:\n");
    scanf("%d%d", &a, &b);
    int arr[MAX][MAX]; 
    while (1) {
        printf("\n=====MENU=====\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        int command;
        scanf("%d", &command);
        switch (command) {
            case 1:
                inputArr(arr, a, b); 
                break;
            case 2:
                printArr(arr, a, b); 
                break;
            case 3:
                inGocTheoMatrix(arr, a, b); 
                break;
            case 4:
                inBienTheoMatrix(arr, a, b);
                break;
            case 5:
                inCheoChinhPhuTheoMatrix(arr, a, b);
                break;
            case 6:
                printPrime(arr, a, b); 
                break;
            case 7:
                return 0;
            default:
                printf("Vui long nhap lai\n");
                break;
        }
    }
    return 0;
}

void inputArr(int arr[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void printArr(int arr[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
void inGocTheoMatrix(int arr[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if ((i == 0 && j == 0) || (i == row - 1 && j == 0) || (i == 0 && j == col - 1) || (i == row - 1 && j == col - 1)) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
}
void inBienTheoMatrix(int arr[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
}
void inCheoChinhPhuTheoMatrix(int arr[MAX][MAX], int row, int col) {
    if (row != col) {
        printf("\nKhong phai ma tran vuong nen khong co duong cheo\n");
    } else {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == j || i + j == col - 1) {
                    printf("%d\t", arr[i][j]);
                } else {
                    printf("0\t");
                }
            }
            printf("\n");
        }
    }
}
int checkPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void printPrime(int arr[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (checkPrime(arr[i][j])) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
}
