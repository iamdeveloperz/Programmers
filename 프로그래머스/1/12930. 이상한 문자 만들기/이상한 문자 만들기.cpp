#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string blankWord = "";
    int idx = 0;
    int len = (int)s.length();
    for (int i = 0; i < len; ++i)
    {
        (idx++ % 2 == 0) ? blankWord += toupper(s[i]) : blankWord += tolower(s[i]);

        if (s[i] == ' ')
            idx = 0;
    }
    
    return blankWord;
}