#include <cstdio>
#include <cstring>

// --- DINH NGHIA CAC STRUCT ---

// Bai 1
struct Student {
    int mssv;
    char ten[50];
};

// Bai 2
struct Employee {
    int id;
    char ten[50];
    float luong;
};

// Bai 3
struct Owner {
    char ten[50];
    int tuoi;
};

struct Car {
    char model[50];
    int nam;
    Owner chuXe; // Nested Struct
};

// --- CAC HAM THUC HIEN ---

void bai1() {
    printf("\n--- Bai 1: Struct Student co ban ---\n");
    Student sv1;

    // Gan du lieu
    sv1.mssv = 20240001;
    strcpy(sv1.ten, "Nguyen Van A");
    struct Student sv2 = {123123132, "bua"};


    // In thong tin
    printf("MSSV: %d\n", sv1.mssv);
    printf("Ten: %s\n", sv1.ten);
    printf("MSSV: %d\n", sv2.mssv);
    printf("Ten: %s\n", sv2.ten);
}

void bai2() {
    printf("\n--- Bai 2: Mang cac Employee ---\n");
    int n;
    Employee ds[100];

    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Nhan vien %d:\n", i + 1);
        printf(" - ID: "); scanf("%d", &ds[i].id);
        getchar(); // Xoa ki tu xuong dong
        printf(" - Ten: "); fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = 0; // Xoa \n
        printf(" - Luong: "); scanf("%f", &ds[i].luong);
    }

    printf("\n%-5s %-20s %-10s\n", "ID", "Ho va Ten", "Luong");
    for(int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10.2f\n", ds[i].id, ds[i].ten, ds[i].luong);
    }
}

void bai3() {
    printf("\n--- Bai 3: Nested Struct (Car & Owner) ---\n");
    Car myCar;

    // Khoi tao thong tin xe
    strcpy(myCar.model, "Toyota Camry");
    myCar.nam = 2023;

    // Khoi tao thong tin chu xe (truy cap thong qua dau cham hai lan)
    strcpy(myCar.chuXe.ten, "Tran Thi B");
    myCar.chuXe.tuoi = 30;

    printf("Thong tin xe:\n");
    printf(" - Model: %s (%d)\n", myCar.model, myCar.nam);
    printf(" - Chu so huu: %s\n", myCar.chuXe.ten);
    printf(" - Tuoi chu xe: %d\n", myCar.chuXe.tuoi);
}

// --- MENU CHINH ---
int main() {
    int chon;
    do {
        printf("\n========= MENU STRUCT =========\n");
        printf("1. Bai 1: Struct Student\n");
        printf("2. Bai 2: Mang Employee\n");
        printf("3. Bai 3: Nested Struct Car\n");
        printf("0. Thoat\n");
        printf("Chon bai: ");
        scanf("%d", &chon);

        switch(chon) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon sai!\n");
        }
    } while(chon != 0);

    return 0;
}