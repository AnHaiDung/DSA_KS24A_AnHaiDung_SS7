#include <stdio.h>

int bubbleSort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("after: \n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    if ( n < 0 || n > 1000 ) {
        printf("khong hop le");
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("before: \n ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, n);
    return 0;
}