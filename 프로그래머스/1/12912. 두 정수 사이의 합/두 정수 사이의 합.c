#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

long long solution(int a, int b) {
    if (a == b)
        return a;

    int least = (a < b) ? a : b;
    int greatest = (least == a) ? b : a;
    long long sum = 0;

    for (; least <= greatest; ++least)
        sum += least;

    return sum;
}