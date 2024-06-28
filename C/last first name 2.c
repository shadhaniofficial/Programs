#include <stdio.h>

int strLen(char* string);

int main() {
    char str[50];
    int n, l, c, i, j;
    scanf("%d", &n);
    getchar(); // consume newline character left in the input buffer
    for (i = 0; i < n; i++) {
        scanf("%[^\n]s", str);
        getchar(); // consume newline character left in the input buffer
        l = strLen(str);
        j = l - 1;
        while ((str[j] != ' ')&&(j>=0)) {
            j--;
        }
        for (j++; j < l; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}

int strLen(char* string) {
    int i = 0;
    while (string[i])
        i++;
    return i;
}

