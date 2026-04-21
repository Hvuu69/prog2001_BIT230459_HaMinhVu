#include <cstdio>
#include <cstring>

// Hàm hỗ trợ xóa bộ nhớ đệm
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- BÀI 1: Tính tổng mảng ---
void bai1() {
    int n, a[100], tong = 0;
    printf("\n--- Bai 1: Tong mang 1 chieu ---\n");
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        tong += a[i];
    }
    printf("Tong cac phan tu: %d\n", tong);
}

// --- BÀI 2: Tìm Max và Index ---
void bai2() {
    int n, a[100];
    printf("\n--- Bai 2: Tim Max va Index ---\n");
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0], index = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    printf("Gia tri lon nhat: %d tai Index: %d\n", max, index);
}

// --- BÀI 3: Đảo chiều mảng ---
void bai3() {
    int n, a[100];
    printf("\n--- Bai 3: Dao chieu mang ---\n");
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for(int i = 0; i < n/2; i++) {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    printf("Mang sau khi dao: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

// --- BÀI 4: Tìm kiếm phần tử ---
void bai4() {
    int n, a[100], x, found = -1;
    printf("\n--- Bai 4: Tim kiem phan tu ---\n");

    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++) {
        if(a[i] == x) { found = i; break; }
    }
    if(found != -1) printf("Tim thay %d tai index %d\n", x, found);
    else printf("Khong tim thay!\n");
}

// --- BÀI 5: In mảng 2 chiều (Matrix) ---
void bai5() {
    int r, c, a[10][10];
    printf("\n--- Bai 5: In ma tran ---\n");

    printf("Nhap so hang va cot: ");
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

// --- BÀI 6: Tổng 2 ma trận ---
void bai6() {
    int r, c, a[10][10], b[10][10];
    printf("\n--- Bai 6: Tong 2 ma tran ---\n");

    printf("Nhap kich thuoc (r c): ");
    scanf("%d %d", &r, &c);

    printf("Nhap ma tran A:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++)
        scanf("%d", &a[i][j]);

    printf("Nhap ma tran B:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++)
        scanf("%d", &b[i][j]);
    
    printf("Ket qua A + B:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            printf("%d\t", a[i][j] + b[i][j]);
        printf("\n");
    }
}

// --- BÀI 7: Ma trận chuyển vị ---
void bai7() {
    int r, c, a[10][10];
    printf("\n--- Bai 7: Ma tran chuyen vi ---\n");
    printf("Nhap r, c: ");
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
        scanf("%d", &a[i][j]);
    
    printf("Ma tran chuyen vi (%dx%d):\n", c, r);
    for(int j=0; j<c; j++) {
        for(int i=0; i<r; i++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

// --- BÀI 8: Nhập String & Length ---
void bai8() {
    char s[100];
    printf("\n--- Bai 8: Nhap chuoi & Do dai ---\n");
    printf("Nhap chuoi: ");
    clearBuffer();
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // Xóa ký tự xuống dòng do fgets
    printf("Chuoi vua nhap: %s\n", s);
    printf("Do dai: %lu\n", strlen(s));
}

// --- BÀI 9: Đếm ký tự trong chuỗi ---
void bai9() {
    char s[100], ch;
    int count = 0;
    printf("\n--- Bai 9: Dem ky tu ---\n");
    printf("Nhap chuoi: ");
    clearBuffer();
    fgets(s, sizeof(s), stdin);
    printf("Nhap ky tu can tim: ");
    scanf("%c", &ch);
    for(int i=0; s[i] != '\0'; i++) if(s[i] == ch) count++;
    printf("Ky tu '%c' xuat hien %d lan.\n", ch, count);
}

// --- BÀI 10: Đảo chiều chuỗi ---
void bai10() {
    char s[100];
    printf("\n--- Bai 10: Dao chieu chuoi ---\n");
    printf("Nhap chuoi: ");
    clearBuffer();
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int len = strlen(s);
    for(int i=0; i<len/2; i++) {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
    printf("Chuoi sau khi dao: %s\n", s);
}

int main() {
    int chon;
    do {
        printf("\n--- MENU MANG & CHUOI (1-10) ---");
        printf("\n0. Thoat\nChon: ");
        scanf("%d", &chon);
        switch(chon) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 5: bai5(); break;
            case 6: bai6(); break;
            case 7: bai7(); break;
            case 8: bai8(); break;
            case 9: bai9(); break;
            case 10: bai10(); break;
            case 0: break;
            default: printf("Sai lua chon!\n");
        }
    } while(chon != 0);
    return 0;
}