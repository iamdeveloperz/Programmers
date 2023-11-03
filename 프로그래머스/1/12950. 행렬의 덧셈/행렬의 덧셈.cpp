#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int rowLen = (int)arr1.size();
    int colLen = (int)arr1[0].size();
    
    for(int w = 0; w < rowLen; ++w) {
        vector<int> tempVec;
        for(int h = 0; h < colLen; ++h)
            tempVec.push_back(arr1[w][h] + arr2[w][h]);
        answer.push_back(tempVec);
    }
    
    return answer;
}