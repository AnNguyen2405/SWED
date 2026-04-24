#include<stdio.h>

long long ulam(long long n) {
    if (n <= 0) return 0;
    
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    return n;
}

int main()
{
    for (int i = 1; i < 1000000; i++)
    {
        long long num = ulam(i);
        if (num != 1)
        {
            printf("num = %d failed\n", i);
            break;
        }
    }
}