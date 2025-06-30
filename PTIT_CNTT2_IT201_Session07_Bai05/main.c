#include <stdio.h>

void change(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int functionDivision(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            change(arr, i, j);
        }
    }
    change(arr, i+1, high);
    return i+1;
}

int quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivotIndex = functionDivision(a, low, high) ;
        quickSort(a, low, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, high);
    }
}

int main() {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("khong hop le");
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d",arr[i]);
    }
    return 0;
}