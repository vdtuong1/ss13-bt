#include <stdio.h>
#include <ctype.h>
int main() {
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];
    int count[26] = {0};
    printf("Nhap vao chuoi: ");
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0'; i++) {
        char currentChar = tolower(input[i]);
        if (isalpha(currentChar)) {
            count[currentChar - 'a']++;
        }
    }
    printf("Ket qua:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}

