#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long i = 1;

    for (; i * i <= n; ++i)
    {
        if (n == i * i)
            return (i + 1) * (i + 1);
    }

    return -1;
}