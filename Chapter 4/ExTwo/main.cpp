#include <cstdio>
// typing
// Hàm Đệ Quy

// int factorial(int n) {
//     if (n == 0 )
//         return 1;
//     else
//         return n * factorial(n - 1);
// }
// int main() {
//     printf("5! = %d", factorial(5));
//     return 0;
// }

// Ham callback

// int add(int a, int b) {
//     return a + b;
// }
// int sub(int a, int b) {
//     return a - b;
// }
// int calu(int a, int b, int (*operation)(int, int)) {
//     return  operation(a,b);
// }
// int main() {
//     int result1 = calu(5, 3, add);
//     int result2 = calu(5, 4, sub);
//
//     printf("ADD: %d\n", result1);
//     printf("SUB: %d\n", result2);
//
//     return 0;
//}

// ham static
// static void ell0() {
//     printf("hello from static function\n");
// }
// int main() {
//     ell0();
//     return 0;
// }

// mieu ta ve ham trong c
// prototype
// int max(int a, int b);
//
// int main() {
//     int m = max(10, 20);
//     printf("Max = %d", m);
//     return 0;
// }
//
// // definition
// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

//Mieu ta truyen tham so trong c
#include <stdio.h>
//
// void change(int x) {
//     x = 100;
// }
//
// int main() {
//     int a = 10;
//     change(a);
//     printf("a = %d", a); // vẫn là 10
//     return 0;
// }

// Bài 2

long tinhTongDeQuy(int n) {
    if (n <= 1) {
        return n;
    }
    return n + tinhTongDeQuy(n - 1);
}

int main() {
    int n;
    printf("--- Tinh tong 1 + 2 + ... + n (Su dung De quy) ---\n");
    printf("Nhap n: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Loi: Vui long nhap mot so nguyen!\n");
        return 1;
    }

    if (n < 0) {
        printf("Vui long nhap so nguyen duong n >= 0.\n");
    } else {
        long ketQua = tinhTongDeQuy(n);
        printf("Tong S(%d) = %ld\n", n, ketQua);
    }

    return 0;
}