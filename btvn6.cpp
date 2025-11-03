#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);

    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Gia tri %d xuat hien o vi tri thu %d", x, i + 1);
            break; 
        }
    }

    if (i == n)
        printf("Gia tri %d khong ton tai trong mang.\n", x);

    return 0;
}

