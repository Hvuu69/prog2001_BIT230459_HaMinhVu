#include <cstdio>
#include <cctype>

int main() {
    FILE *fIn = fopen("data.txt", "r");
    FILE *fOut = fopen("result_numbers.txt", "w");

    if (fIn == NULL) return 1;

    int count = 0;
    char ch;
    while ((ch = fgetc(fIn)) != EOF) {
        if (isdigit(ch)) { // Kiểm tra nếu là con số
            count++;
        }
    }

    fprintf(fOut, "So ky tu con so la: %d", count);
    printf("Da dem xong con so. Ket qua tai result_numbers.txt\n");

    fclose(fIn);
    fclose(fOut);
    return 0;
}