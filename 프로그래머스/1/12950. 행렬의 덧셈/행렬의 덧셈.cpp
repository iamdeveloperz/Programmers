#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer = arr1;
    
    for(int row = 0; row < arr1.size(); ++row) {
        for(int col = 0; col < arr1[0].size(); ++col)
            answer[row][col] = arr1[row][col] + arr2[row][col];
    }
    
    return answer;
}