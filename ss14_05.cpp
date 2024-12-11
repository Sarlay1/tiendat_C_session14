#include <stdio.h>
#include <string.h>

int count(const char *str) {
    int count = 0, inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (inWord == 0) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    return count;
}

int main() {
    char str[] = "Hello world";

    printf("Chuoi: %s\n", str);
    printf("So tu: %d\n", count	(str));

    return 0;
}

