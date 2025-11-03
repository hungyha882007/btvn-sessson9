#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int evenNumber = 0, oddNumber = 0;

    printf("Cac so chan trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            evenNumber++;
        }
    }

    printf("Cac so le trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
            oddNumber++;
        }
    }

    printf("Tong so chan = %d", evenNumber);
    printf("Tong so le = %d", oddNumber);

    return 0;
}
