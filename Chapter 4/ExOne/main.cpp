#include <cstdio>

// --- BÀI 1: KHUNG HÀM CHO SLIDE CHAPTER 4 ---
void bai1() {
    printf("\n--- Bai 1: Cac vi du tu Slide Chapter 4 ---\n");
    printf("[Huong dan] Hay copy code tu cac slide 15, 17, 19, 24, 26, 28, 30 vao day.\n");
    // Vi du: slide15(); slide17(); ...
}

// --- BÀI 2: HÀM TÍNH TỔNG TỪ 1 ĐẾN N ---
long tinhTong(int n) {
    long s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

void thucHienBai2() {
    int n;
    printf("\n--- Bai 2: Tinh tong 1 + ... + n ---\n");
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 0) printf("Vui long nhap n >= 0\n");
    else printf("Tong tu 1 den %d la: %ld\n", n, tinhTong(n));
}

// --- BÀI 3: HÀM TÌM MAX 3 SỐ ---
int timMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

void thucHienBai3() {
    int a, b, c;
    printf("\n--- Bai 3: Tim Max cua 3 so ---\n");
    printf("Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Gia tri lon nhat la: %d\n", timMax(a, b, c));
}

// --- BÀI 4: TRUNG BÌNH CỘNG (TRUYỀN VÀ TRẢ VỀ ĐỊA CHỈ) ---
// Su dung static de bien ton tai sau khi thoat khoi ham
float* tinhTrungBinh(float *a, float *b, float *c) {
    static float res; 
    res = (*a + *b + *c) / 3;
    return &res; 
}

void thucHienBai4() {
    float x, y, z;
    printf("\n--- Bai 4: Tinh trung binh (Truyen/Tra dia chi) ---\n");
    printf("Nhap 3 so thuc x, y, z: ");
    scanf("%f %f %f", &x, &y, &z);

    // Truyen vao dia chi cua x, y, z bang toan tu &
    float *ketQua = tinhTrungBinh(&x, &y, &z);

    printf("Gia tri trung binh: %.2f (tai dia chi: %p)\n", *ketQua, (void*)ketQua);
}

// --- MENU ĐIỀU KHIỂN ---
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int chon;
    do {
        printf("\n================ MENU BAI TAP ================\n");
        printf("1. Bai 1 (Slide Chapter 4)\n");
        printf("2. Bai 2 (Ham tinh tong 1..n)\n");
        printf("3. Bai 3 (Ham tim Max 3 so)\n");
        printf("4. Bai 4 (Ham trung binh - Con tro)\n");
        printf("0. Thoat\n");
        printf("Chon bai tap (0-4): ");
        
        if (scanf("%d", &chon) != 1) {
            printf("Loi! Vui long nhap so.\n");
            clearBuffer();
            chon = -1;
            continue;
        }

        switch (chon) {
            case 1: bai1(); break;
            case 2: thucHienBai2(); break;
            case 3: thucHienBai3(); break;
            case 4: thucHienBai4(); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
        printf("----------------------------------------------\n");
    } while (chon != 0);

    return 0;
}