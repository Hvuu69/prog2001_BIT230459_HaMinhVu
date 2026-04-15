#include <cstdio> // Thu vien cho printf va scanf
#include <stdlib.h>


void bai1() {
    //30
    // int () {
    //     int num1, num2;
    //
    //     printf("Enter two numbers: ");
    //     scanf("%d%d", &num1, &num2);
    //
    //     printf("addition: %d\n", num1 + num2);
    //     printf("subtraction: %d\n", num1 - num2);
    //     printf("multiplication: %d\n", num1 * num2);
    //     printf("division: %d\n", num1 / num2);
    //     printf("Modulus:%d", num1 % num2);
    //     return 0;
    // }
    // 31
    // int main() {
    //     int a,b;
    //
    //     printf("enter 2 numbers: ");
    //     scanf("%d%d",&a,&b);
    //
    //     if (a > b)
    //         printf("%d a bigger b %d\n", a,b);
    //     else if (a < b)
    //         printf("%d a smaller b %d\n", a, b);
    //     else
    //         printf("%d a equal b %d\n", a, b);
    //     return 0;
    // }
    // //32
    // int main() {
    //     int num;
    //     printf("Enter a number: ");
    //     scanf("%d", &num);
    //     if (num >= 10 && num <= 50)
    //     printf("The number is between 0 and 50");
    //     else
    //         printf("The number is not in the range");
    // }
    // //33
    //  int main() {
    //      int num = 10;
    //
    //      printf("Intial vaule: %d\n",num);
    //
    //      num += 5;
    //      printf("after += 5: %d\n",num);
    //
    //      num -= 3;
    //      printf("after -= 3: %d\n",num);
    //
    //      num *= 2;
    //      printf("after *= 2: %d\n",num);
    //
    //      num /= 4;
    //      printf("after /= 4: %d\n",num);
    //
    //      return 0;
    //  }

    // //35
    // int main() {
    //     printf("somethjing");
    //     return 0;
    // }
    // //36
    // #include <stdlib.h>
    //
    // int main() {
    //     int number = atoi("123");
    //     printf("converted number = %d", number);
    //     return 0;
    // }
    //37
    //
    // #include <math.h>
    //
    // int main() {
    //     double x = 16.0;
    //     printf("square root of %.1f is %.1f", x, sqrt(x));
    //     return 0;
    // }
}

void bai2() {
    int n;
    float inputFloat;
    printf("\n--- Bai 2: Ep kieu du lieu ---\n");

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    printf("Ep kieu %d sang so thuc: %.2f\n", n, (float)n);

    printf("Nhap mot so thuc: ");
    scanf("%f", &inputFloat);
    printf("Ep kieu %.2f sang so nguyen: %d\n", inputFloat, (int)inputFloat);
}

void bai3() {
    int a, b;
    printf("\n--- Bai 3: Cac phep toan co ban ---\n");
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

    printf("Tong: %d\n", a + b);
    printf("Hieu: %d\n", a - b);
    printf("Tich: %d\n", a * b);

    if (b != 0) {
        printf("Chia lay nguyen: %d\n", a / b);
        printf("Chia lay du (%%): %d\n", a % b);
        printf("Chia lay thuc: %.2f\n", (float)a / b);
    } else {
        printf("Loi: Khong the chia cho 0!\n");
    }
}

void bai4() {
    float x;
    printf("\n--- Bai 4: Toan tu gan hon hop ---\n");
    printf("Nhap x: ");
    scanf("%f", &x);

    x += 5; printf("Sau khi tang 5 (+=5): %.2f\n", x);
    x -= 3; printf("Sau khi giam 3 (-=3): %.2f\n", x);
    x *= 2; printf("Sau khi nhan 2 (*=2): %.2f\n", x);
    x /= 4; printf("Sau khi chia 4 (/=4): %.2f\n", x);
}

void bai5() {
    int n;
    printf("\n--- Bai 5: Toan tu Logic && ---\n");
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 50) {
        printf("%d nam trong khoang [10, 50]\n", n);
    } else {
        printf("%d KHONG nam trong khoang [10, 50]\n", n);
    }
}

void bai6() {
    int a, b;
    printf("\n--- Bai 6: Toan tu dich bit ---\n");
    printf("Nhap so a: "); scanf("%d", &a);
    printf("Nhap so buoc dich b: "); scanf("%d", &b);

    printf("Dich trai (a << b): %d\n", (a << b));
    printf("Dich phai (a >> b): %d\n", (a >> b));
}

void bai7() {
    int a, b, c;
    printf("\n--- Bai 7: Tim Max bang if/else ---\n");
    printf("Nhap 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Gia tri lon nhat la: %d\n", max);
}

int main() {
    int chon;
    do {
        printf("\n================ MENU BAITAP ================\n");
        printf("1. Bai 1 (Slide 30-37)\n");
        printf("2. Bai 2 (Ep kieu)\n");
        printf("3. Bai 3 (Cac phep toan)\n");
        printf("4. Bai 4 (Toan tu gan)\n");
        printf("5. Bai 5 (Toan tu logic)\n");
        printf("6. Bai 6 (Dich bit)\n");
        printf("7. Bai 7 (Tim Max)\n");
        printf("0. Thoat\n");
        printf("Chon so bai tap (0-7): ");

        if (scanf("%d", &chon) != 1) {
            printf("Vui long chi nhap so!\n");
            chon = -1;
            continue;
        }

        switch (chon) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 5: bai5(); break;
            case 6: bai6(); break;
            case 7: bai7(); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
        printf("---------------------------------------------\n");
    } while (chon != 0);

    return 0;
}