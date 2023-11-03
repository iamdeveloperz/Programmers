#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, count = 0;
    string three;

    while (n) {
        three += to_string(n % 3);
        n /= 3; ++count;
    }

    vector<int> temp;
    for (int i = 0; i < three.length(); ++i)
        temp.push_back(three[i] - '0');

    for (int i = 1; count > 0; --count) {
        answer += temp[count - 1] * i;
        i *= 3;
    }

    return answer;
}