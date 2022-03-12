#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define INITIAL_SIZE 50

int read_str(char *S, int *str_size, int n);
int *create_suffix_array(int n);
void int_swap(int *a, int *b);
int sort_suffix_array(char *S, int *P, int n);
void print_suffix_array(char *S, int *P, int n);

int main(){
    int str_size=INITIAL_SIZE, n=0;
    char *S = (char*)malloc(str_size*sizeof(char));

    n = read_str(S, &str_size, n);
    int *P = create_suffix_array(n);
    sort_suffix_array(S, P, n);
    print_suffix_array(S, P, n);

    return 0;

}

/* return the length of string */
int
read_str(char *S, int *str_size, int n){
    int c;
    if ((c=getchar())!=EOF){
        if (n==*str_size){
            *str_size *= 2;
            S = (char*)realloc(S, *str_size*sizeof(char));
        }
        *(S+n) = c;
        return read_str(S, str_size, n+1);
    }

    return n;
}

/* make an array to store the index of suffixes */
int
*create_suffix_array(int n){
    int *P = (int*)malloc(n*sizeof(int)), i;
    for (i=0; i<n; i++){
        *(P+i) = i;
    }
    return P;
}

void
int_swap(int *a, int *b){
    int tmp=*a;
    *a = *b;
    *b = tmp;
}

int
sort_suffix_array(char *S, int *P, int n){
    int i, j;
    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if (strcmp(S+*(P+i), S+*(P+j))>0){
                int_swap(P+i, P+j);
            }
        }
    }
    return 0;
}

void
print_suffix_array(char *S, int *P, int n){
    int i, j;
    for (i=0; i<n; i++){
        printf("pos [%d]: ", i);
        j = *(P+i);
        while (*(S+j)!='\0'){
            printf("%c", *(S+j));
            j++;
        }
        printf("\n");
    }
}
