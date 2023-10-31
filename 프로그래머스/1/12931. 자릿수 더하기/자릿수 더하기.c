#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(true) {
        int num = n % 10;
        n = n / 10;

        answer += num;
        if(n <= 0)
            break;
    }
    
    return answer;
}