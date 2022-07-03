#include <stdio.h>

void print_int_array(int A[], int n);
void int_swap(int *p1, int *p2);

void rearrange(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            if (i != j) {
                int_swap(arr + i, arr + j);
            }
            j++;
        }
    }
}

int main(int argc, char *argv[]) {
    int A[] = {-2, 3, -6, 7, 9, -4, 8};
    int n = sizeof(A) / sizeof(*A);

    print_int_array(A, n);
    rearrange(A, n);
    print_int_array(A, n);

    return 0;
}

void print_int_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %3d", A[i]);
    }
    printf("\n");
}

void int_swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
