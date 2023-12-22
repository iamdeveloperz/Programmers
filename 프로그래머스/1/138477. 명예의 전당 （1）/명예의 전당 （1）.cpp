#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> kScore;
    
    for(int i = 0; i < score.size(); ++i)
    {
        kScore.push_back(score[i]);
        
        sort(kScore.begin(), kScore.end());
        
        if(kScore.size() > k) kScore.erase(kScore.begin());
        
        answer.push_back(kScore[0]);
    }
    
    return answer;
}