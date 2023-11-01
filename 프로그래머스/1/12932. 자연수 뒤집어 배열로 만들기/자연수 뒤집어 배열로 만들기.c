#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int elements = n;
    int arrSize = 0;
    int index = 0;
    
    while(elements)
    {
        elements = elements / 10;
        ++arrSize;
    }
    
    int* answer = (int*)malloc(sizeof(int) * arrSize);
    
    while(n)
    {
        elements = n % 10;
        answer[index++] = elements;
        n = n / 10;
    }
    
    return answer;
}