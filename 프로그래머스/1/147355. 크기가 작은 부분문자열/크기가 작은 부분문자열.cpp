#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int t_size = (int)t.size();
    int p_size = (int)p.size();
    long P = stol(p.c_str());
    int answer = 0;

    for (int i = 0; i < (t_size + 1) - p_size; ++i)
    {
        string temp = "";
        for (int j = i; j < p_size + i; ++j)
            temp += t[j];

        long T = stol(temp.c_str());
        if (T <= P)
            ++answer;
    }

    return answer;
}