/* Write a nesting of loops that reads numbers from stdin, and
for each value read, computes and prints the sum of the
primes that are less than or equal to it, and then whether or
not that sum is itself prime.
*/
#include <stdio.h>

#define FMT_SUM "sum of primes is %d"
#define FMT_PRIME " which is "
#define PROMPT "Enter the number:\n"

int isprime(int n);
int sum_primes(int n, int sum);

int main(int argc, char *argv[]){
    int num, sum;

    printf(PROMPT);
    while (scanf("%d", &num)==1){
        // reset `sum` to 0
        sum = 0;
        sum = sum_primes(num, sum);

        printf(FMT_SUM, sum);
        if (isprime(sum)){
            printf(FMT_PRIME "a prime");
        }else{
            printf(FMT_PRIME "not a prime");
        }
        printf("\n\n");
    }

    return 0;
}

/* Return 1, if `n` is a prime.
    Otherwise, return 0.
*/
int
isprime(int n){
    int divisor;
    for (divisor=2; divisor*divisor<=n; divisor++){
        if (n%divisor==0){
            return 0;
        }
    }
    // is a prime
    return 1;
}

int
sum_primes(int n, int sum){
    if (n>1){
        if (isprime(n)){
            return sum_primes(n-1, sum+n);
        }else{
            return sum_primes(n-1, sum);
        }
    }
    return sum;
}
