#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int n = x;
    int sum = 0;
    
    while(n)
    {
        sum += n % 10;
        n = n / 10;
    }
    
    return x % sum == 0 ? true : false;
}