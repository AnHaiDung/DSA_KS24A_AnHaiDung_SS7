#include <stdio.h>

void sort(int arr[][100], int row, int k) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row-i-1; j++) {
            if (arr[j][k] > arr[j+1][k]) {
                int temp = arr[j][k];
                arr[j][k] = arr[j+1][k];
                arr[j+1][k] = temp;
            }
        }
    }
}

int main(void) {
    int row;
    int col;
    int k;
    printf("row : ");
    scanf("%d", &row);
    printf("col : ");
    scanf("%d", &col);
    if (row <= 0 || col <= 0 || row > 1000 || col > 1000 ) {
        printf("khong hop le");
        return 0;
    }
    int arr[100][100];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("nhap chi so cot muon sap xep: ");
    scanf("%d", &k);
    if (k < 0 || k >= col) {
        printf("khong hop le");
        return 0;
    }
    sort(arr, row,k);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}