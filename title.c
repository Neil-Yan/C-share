#include <stdio.h>

void title(const char str[]) {
    int i = 0, capitalised = 1;
    while (str[i] != '\0') {
        /* 1st character */
        if (capitalised && str[i] != ' ') {
            capitalised = 0;
            printf("%c", str[i] - ('a' - 'A'));
            /* Space */
        } else if (str[i] == ' ') {
            printf(" ");
            capitalised = 1;
            /* Other character */
        } else {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    title("gone with the wind");
    title("a comparative study");

    return 0;
}