#include <ctype.h>
#include <stdio.h>
#include <string.h>

int bubbleSort(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(void) {
    char str[100];
    int check=0;
    printf("nhap chuoi ki tu: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    if (str[len -1]=='\n') {
        str[len -1] = '\0';
    }
    for (int i = 0; i < len; i++) {
        if (!isspace(str[i])) {
            check=1;
            break;
        }
    }
    bubbleSort(str, len);
    printf("%s",str);
    return 0;
}
