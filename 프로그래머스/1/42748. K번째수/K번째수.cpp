#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {

    vector<int> answer;

    for (int i = 0; i < commands.size(); ++i)
    {
        int startIndex = commands[i][0] - 1;
        int endIndex = commands[i][1];

        vector<int> splitArray;
        
        for (; startIndex < endIndex; ++startIndex)
            splitArray.push_back(array[startIndex]);

        sort(splitArray.begin(), splitArray.end());
        answer.push_back(splitArray[commands[i][2] - 1]);
    }

    return answer;
}