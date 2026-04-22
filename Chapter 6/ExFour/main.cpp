#include <cstdio>
#include <cctype>

int main() {
    FILE *fIn = fopen("data.txt", "r");
    FILE *fOut = fopen("result_letters.txt", "w");
    
    if (fIn == NULL) return 1;

    int count = 0;
    char ch;
    while ((ch = fgetc(fIn)) != EOF) {
        if (isalpha(ch)) { // Kiểm tra nếu là chữ cái
            count++;
        }
    }

    fprintf(fOut, "So ky tu chu cai la: %d", count);
    printf("Da dem xong chu cai. Ket qua tai result_letters.txt\n");

    fclose(fIn);
    fclose(fOut);
    return 0;
}