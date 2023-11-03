#include <string>
#include <cstring>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int idx = 0;
    for(; idx < seoul.size(); ++idx)
        if(!strcmp(seoul[idx].c_str(), "Kim"))
            break;
    
    string answer = "김서방은 " + to_string(idx) + "에 있다";
    return answer;
}