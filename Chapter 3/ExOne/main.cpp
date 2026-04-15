#include <cstdio>

// Hàm hỗ trợ xóa bộ nhớ đệm
// --- BÀI 1 ---
void bai1() {
    //38
    // #include <string.h>
    // int main() {
    //   char str1[] = "hello ";
    //     char str2[] = "world";
    //     strcat (str1, str2);
    //     printf("%s\n", str1);
    //     return 0;
    // }

    // //39
    // #include <time.h>
    // int main() {
    //     time_t current_time;
    //     time(&current_time);
    //     printf("Current_time: %s", ctime(&current_time));
    //     return 0;
    // }

    //40

    // #include <ctype.h>
    // int main(){
    //     char c = 'a';
    //     if (isalpha(c)) {
    //     printf("'%c'is a letter.\n");
    //     return 0;
    //     }
    // }
}
// --- BÀI 2 ---
void bai2() {
    // // 5
    // int main() {
    //     int x = 10;
    //     //outter
    //     {
    //         int y = 20;
    //         {    //inner block
    //
    //             int z = 30;
    //             printf("inside inner block: x = %d, y = %d, z = %d\n", x, y, z);
    //         }
    //         printf("outside all block: x = %d\n", x);
    //         return 0;
    //     }
    // }
    // 11
    // int globalVar = 585;
    // void display() {
    //     printf("Bien global = %d\n", globalVar);
    // }
    // int main() {
    //     display();
    // }
    // // 12
    // void increment() {
    //     static  int  counter = 0;
    //     counter++;
    //     printf("couter = %d\n", counter);
    // }
    // int main() {
    //     increment();
    //     increment();
    //     increment();
    // }
}

// --- BÀI 3 ---
void bai3() {
    printf("\n--- Bai 3: Pham vi bien (Scope) ---\n");
    int x = 10; // Biến x của hàm main (outer)
    printf("Gia tri x ben ngoai khoi lenh: %d\n", x);
    
    {
        int x = 20; // Biến x moi ben trong khoi lenh (inner)
        printf("Gia tri x ben trong khoi lenh {}: %d\n", x);
    }
    
    printf("Gia tri x sau khi thoat khoi lenh: %d\n", x);
}

// --- BÀI 4 ---
void bai4() {
    printf("\n--- Bai 4: Truy cap bien khoi ngoai tu khoi con ---\n");
    int outerVar = 100;
    printf("Bien ngoai (Outer block) co gia tri: %d\n", outerVar);
    
    {
        printf("Truy cap tu khoi trong (Inner block): %d\n", outerVar);
        outerVar += 50; 
    }
    printf("Gia tri bien ngoai sau khi bi khoi trong thay doi: %d\n", outerVar);
}

// --- BÀI 5 ---
void incrementNonStatic() {
    int counter = 0; // Biến thường: bị khởi tạo lại mỗi khi gọi hàm
    counter++;
    printf("Non-static counter: %d\n", counter);
}

void incrementStatic() {
    static int counter = 0; // Biến static: giữ nguyên giá trị qua các lần gọi hàm
    counter++;
    printf("Static counter: %d\n", counter);
}

void bai5() {
    printf("\n--- Bai 5: Static vs Non-static ---\n");
    printf("Goi ham tang 3 don vi:\n");
    for(int i = 0; i < 3; i++) {
        printf("Lan %d: ", i + 1);
        incrementNonStatic();
    }
    printf("----------\n");
    for(int i = 0; i < 3; i++) {
        printf("Lan %d: ", i + 1);
        incrementStatic();
    }
}

// --- BÀI 6 ---
void bai6() {
    int a, b, c;
    printf("\n--- Bai 6: Toan tu logic thay cho if long nhau ---\n");
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    // Thay vi dung 3 if long nhau, ta dung &&
    if (a > 0 && b > 0 && c > 0) {
        printf("Ca 3 so deu la so duong.\n");
    } else {
        printf("Co it nhat mot so khong phai so duong.\n");
    }
}

// --- BÀI 7 ---
void bai7() {
    float a, b;
    printf("\n--- Bai 7: Phep chia co check loi ---\n");
    printf("Nhap so bi chia a: ");
    scanf("%f", &a);
    printf("Nhap so chia b: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Loi: Khong the thuc hien phep chia cho 0!\n");
    } else {
        printf("Ket qua %.2f / %.2f = %.2f\n", a, b, a / b);
    }
}

// --- CHUONG TRINH CHINH ---
int main() {
    int chon;
    do {
        printf("\n================ MENU BAI TAP ================\n");
        printf("1. Bai 1 (Slide Ch2/38-40)\n");
        printf("2. Bai 2 (Slide Ch3/5, 11, 12)\n");
        printf("3. Bai 3 (Scope - Bien trung ten)\n");
        printf("4. Bai 4 (Scope - Truy cap khoi ngoai)\n");
        printf("5. Bai 5 (Static vs Non-static)\n");
        printf("6. Bai 6 (Toan tu logic &&)\n");
        printf("7. Bai 7 (Check loi phep chia)\n");
        printf("0. Thoat\n");
        printf("Chon bai tap (0-7): ");
        
        if (scanf("%d", &chon) != 1) {
            printf("Vui long nhap so!\n");
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
        printf("----------------------------------------------\n");
    } while (chon != 0);

    return 0;
}