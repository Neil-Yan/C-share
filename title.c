#include <stdio.h>

void title(const char str[]) {
    int i = 0, capitalised = 1;
    while (str[i] != '\0') {
        /* 1st character of a word */
        if (capitalised && str[i] != ' ' && str[i] >= 'a' && str[i] <= 'z') {
            capitalised = 0;
            printf("%c", str[i] - ('a' - 'A'));
            /* Space then move to next word */
        } else if (str[i] == ' ') {
            printf(" ");
            capitalised = 1;
            /* Other character in a word */
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