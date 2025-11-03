#include <stdio.h>
#include <math.h>

int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
}


int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int sum = 0;

    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            printf("%d ", a[i]);
            sum += a[i];
        }
    }

    printf("Tong cac so nguyen to = %d", sum);

    return 0;
}
