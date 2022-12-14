#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int x)
{
    for (int factor = 2; factor < sqrt(x); ++factor)
        if (x % factor == 0)
            return false;
    return true;
}

void print_primes(int limit)
{
    bool primes_exist = false;
    for (int i = 2; i < limit; ++i)
        if (is_prime(i))
        {
            primes_exist = true;
            printf("%d ", i);
        }
    if (!primes_exist)
        printf("There are no prime numbers between 1 and %d", limit); 
    printf("\n");
}

int main()
{
    printf("Enter a limit: ");
    int n;
    scanf("%d", &n);

    print_primes(n);

    return 0;
}