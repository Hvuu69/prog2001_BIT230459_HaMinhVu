#include <cstdio>

// Hàm xóa bộ nhớ đệm
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- BÀI 1: Tìm Min của 3 số ---
void bai1() {
    int a, b, c;
    printf("\n--- Bai 1: Tim gia tri nho nhat ---\n");
    printf("Nhap 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Gia tri nho nhat la: %d\n", min);
}

// --- BÀI 2: Giai phuong trinh ax + b = 0 ---
void bai2() {
    float a, b;
    printf("\n--- Bai 2: Giai phuong trinh ax + b = 0 ---\n");
    printf("Nhap a va b: ");
    scanf("%f %f", &a, &b);

    if (a == 0) {
        if (b == 0) printf("Phuong trinh co vo so nghiem.\n");
        else printf("Phuong trinh vo nghiem.\n");
    } else {
        printf("Nghiem x = %.2f\n", -b / a);
    }
}

// --- BÀI 3: In thu trong tuan ---
void bai3() {
    int day;
    printf("\n--- Bai 3: In thu trong tuan ---\n");
    printf("Nhap mot so tu 1-7: ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Chu nhat\n"); break;
        case 2: printf("Thu hai\n"); break;
        case 3: printf("Thu ba\n"); break;
        case 4: printf("Thu tu\n"); break;
        case 5: printf("Thu nam\n"); break;
        case 6: printf("Thu sau\n"); break;
        case 7: printf("Thu bay\n"); break;
        default: printf("Khong phai ngay trong tuan!\n");
    }
}

// --- BÀI 4: Tinh Tong S = 1 + 2 + ... + n ---
void bai4() {
    int n, s = 0;
    printf("\n--- Bai 4: Tinh tong S = 1 + ... + n ---\n");
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap so nguyen duong!\n");
    } else {
        for (int i = 1; i <= n; i++) s += i;
        printf("Tong S = %d\n", s);
    }
}

// --- BÀI 5: Dao nguoc so ---
void bai5() {
    int n, reversed = 0;
    printf("\n--- Bai 5: Dao nguoc so ---\n");
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    int temp = n; // Giu lai gia tri de in ra
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("So dao nguoc cua %d la: %d\n", temp, reversed);
}

// --- BÀI 6: So dau tien chia het cho 3 va 7 ---
void bai6() {
    printf("\n--- Bai 6: So dau tien chia het cho 3 va 7 ---\n");
    int i = 1;
    do {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("So nguyen duong dau tien la: %d\n", i);
            break;
        }
        i++;
    } while (true);
}

// --- BÀI 7: Lap lai den khi nhap dung 1-100 ---
void bai7() {
    int n;
    printf("\n--- Bai 7: Kiem tra khoang 1-100 ---\n");
    do {
        printf("Nhap mot so (1-100): ");
        scanf("%d", &n);
        if (n < 1 || n > 100) {
            printf("Hay nhap lai.\n");
        }
    } while (n < 1 || n > 100);
    printf("Ban da nhap dung so %d.\n", n);
}

// --- MENU CHINH ---
int main() {
    int chon;
    do {
        printf("\n========= MENU BAI TAP =========\n");
        printf("1. Tim Min 3 so (if-else)\n");
        printf("2. Giai phuong trinh ax + b = 0\n");
        printf("3. In thu trong tuan (switch-case)\n");
        printf("4. Tinh tong 1 den n\n");
        printf("5. Dao nguoc so (while)\n");
        printf("6. So dau tien chia het cho 3 & 7 (do-while)\n");
        printf("7. Nhap so den khi dung 1-100 (do-while)\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");

        if (scanf("%d", &chon) != 1) {
            printf("Vui long nhap con so!\n");
            clearBuffer();
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
    } while (chon != 0);

    return 0;
}