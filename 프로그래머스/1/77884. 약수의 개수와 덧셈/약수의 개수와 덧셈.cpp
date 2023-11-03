#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int sum = 0;
    
    for(left; left <= right; ++left)
    {
        int i = 1, cnt = 0;
        for(; i * i <= left; ++i) {
            if(left % i == 0) {
                ++cnt;
                if(i * i < left) ++cnt;
            }
        }
        
        (cnt % 2 == 0) ? sum += left : sum -= left;
    }
    
    return sum;
}