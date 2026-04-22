#include <cstdio>

int main() {
    char data[255];

    // Bài 2: Ghi file
    FILE *f = fopen("data.txt", "w");
    printf("Nhap vao mot doan text: ");
    scanf(" %[^\n]", data); // Đọc chuỗi có dấu cách cho đến khi xuống dòng
    fprintf(f, "%s", data);
    fclose(f);
    printf("Da ghi vao file data.txt\n");

    // Bài 3: Đọc file và in ra màn hình
    f = fopen("data.txt", "r");
    char buffer[255];
    if (fgets(buffer, 255, f) != NULL) {
        printf("Noi dung file doc duoc: %s\n", buffer);
    }
    fclose(f);

    return 0;
}