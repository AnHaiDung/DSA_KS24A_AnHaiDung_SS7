#include <stdio.h>

int merge(int arr[], int start, int mid, int end) {
    int i,j,k;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int left[n1], right[n2];
    for (i = 0; i < n1; i++) {
        left[i] = arr[start + i];
    }
    for (j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }
    i=0;
    j=0;
    k=start;
    while(i<n1 && j<n2) {
        if(left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

int mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr,start,mid,end);
    }
}

int main(void) {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i );
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}