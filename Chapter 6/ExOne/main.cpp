#include <cstdio>

int main() {
    // 1. Tạo file trong cùng thư mục với file code
    FILE *f1 = fopen("test_local.txt", "w");
    if (f1 != NULL) {
        printf("Da tao file test_local.txt thanh cong.\n");
        fclose(f1);
    }

    // Đường dẫn sử dụng dấu gạch chéo kép \\
    FILE *f2 = fopen("D:\Clion\FileTest\test_drive_c.txt", "w");
    if (f2 != NULL) {
        printf("Da tao file trong o C thanh cong.\n");
        fclose(f2);
    } else {
        printf("Khong the tao file trong o C (Co the do thieu quyen Admin).\n");
    }

    return 0;
}