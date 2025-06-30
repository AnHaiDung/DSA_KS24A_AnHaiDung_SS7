#include <stdio.h>

int sort(int arr[],int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void) {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("khong hop le\n");
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    int negativeNumber[n];
    int numberZero[n];
    int positiveNumber[n];
    int countNegativeNumber=0;
    int countPositiveNumber=0;
    int countZero=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negativeNumber[countNegativeNumber++] = arr[i];
        }else if (arr[i] == 0) {
            numberZero[countZero++] = arr[i];
        }else {
            positiveNumber[countPositiveNumber++] = arr[i];
        }
    }
    sort(negativeNumber, countNegativeNumber);
    sort(positiveNumber, countPositiveNumber);
    int count=0;
    for (int i = 0; i < countNegativeNumber; i++) {
        arr[count++]=negativeNumber[i];
    }
    for (int i = 0; i < countZero; i++) {
        arr[count++]=numberZero[i];
    }
    for (int i = 0; i < countPositiveNumber; i++) {
        arr[count++]=positiveNumber[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}