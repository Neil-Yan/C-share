#include <stdio.h>

int duplicates(const int a[], int n) {
    int i, j, k, find, dup_count = 0, print[n];

    /* initialise to zero */
    for (i = 0; i < n; i++) {
        print[i] = 0;
    }

    for (i = 0; i < n; i++) {
        find = 0;
        for (j = i + 1; j < n; j++) {
            /* find the same value */
            if (a[i] == a[j]) {
                find = 1;
                break;
            }
        }

        /* if it has not been printed before */
        if (find && !print[i]) {
            printf("%d ", a[i]);
            dup_count++;
            /* set all same value in `print` to 1 */
            for (k = 0; k < n; k++) {
                if (a[k] == a[i]) {
                    print[k] = 1;
                }
            }
        }
    }
    printf("\n");

    return dup_count;
}

int main(int argc, char *argv[]) {
    int A[] = {3, 7, 8, 9, 2, 0, 3, 0, 0};
    printf("%d\n", duplicates(A, sizeof(A) / sizeof(*A)));

    return 0;
}