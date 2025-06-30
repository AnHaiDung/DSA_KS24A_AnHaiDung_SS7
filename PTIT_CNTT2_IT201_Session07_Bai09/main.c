#include <stdio.h>

int sortEven(int arr[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int sortOdd(int arr[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    int evenNumber[n];
    int oddNumber[n];
    int even=0;
    int odd=0;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &arr[i]);
        if(arr[i]%2==0) {
            evenNumber[even++] = arr[i];
        }else {
            oddNumber[odd++] = arr[i];
        }
    }
    sortEven(evenNumber, n);
    sortOdd(oddNumber, n);
    for (int i = 0; i < even; i++) {
        arr[i] = evenNumber[i];
    }
    for (int i = 0; i < odd; i++) {
        arr[even+i] = oddNumber[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}