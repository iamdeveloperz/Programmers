#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
    return num % 2 == 0 ? "Even" : "Odd";
}