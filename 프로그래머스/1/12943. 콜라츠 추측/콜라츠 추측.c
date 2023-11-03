#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    long long n = num;
    int count = 0;
    while(n != 1)
    {
        n = (n % 2 == 0) ? (n / 2) : (n * 3 + 1);
        ++count;
    }
    
    return (count >= 500) ? -1 : count;
}