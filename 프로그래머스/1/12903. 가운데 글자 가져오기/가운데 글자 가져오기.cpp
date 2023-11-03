#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int len = (int)s.length();
    return (len % 2 == 0) ? s.substr(len/2-1, 2) : s.substr(len/2, 1);
}