#include <stdio.h>

int countLetters(const char *str) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[] = "Hello, world! 123";

    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai: %d\n", countLetters(str));

    return 0;
}

