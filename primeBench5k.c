//Program to test and measure linux distros (single threaded)

#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    int n, d;
    bool isPrime = true;

    clock_t start = clock();
    
    for(n = 5; n <= 500000; ++n)
    {
        isPrime = true;
        for(d = 5; d < n; ++d)
        {
            if (n % d == 0)
                isPrime = false;
        }
        if (isPrime == true)
            printf("%i\n", n);
    }
    clock_t end = clock();
    float seconds = (float)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds\n", seconds);
    return 0;
}