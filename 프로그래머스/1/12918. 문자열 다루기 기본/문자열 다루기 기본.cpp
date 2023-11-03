#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int matched = 0;
    if(s.length() == 4 || s.length() == 6)
    {
        for(int i = 0; i < s.length(); ++i)
            ((s[i] >= '0') && (s[i] <= '9')) ? ++matched : i = s.length();
    }
    
    return (matched == s.length()) ? true : false;
}