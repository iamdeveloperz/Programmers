#include <string>
#include <vector>

using namespace std;

int GCM(int v1, int v2)
{
    int mod = v1 % v2;
    while(mod > 0) {
        v1 = v2;
        v2 = mod;
        mod = v1 % v2;
    }
    
    return v2;
}

int LCM(int v1, int v2){
    return v1 * v2 / GCM(v1, v2);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.resize(2);
    
    // euclid
    answer[0] = GCM(n, m);
    answer[1] = LCM(n, m);
    
    return answer;
}