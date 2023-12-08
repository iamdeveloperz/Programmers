#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";

    for (int i = food.size() - 1; i > 0; --i)
    {
        int foodQuantity = (food[i] % 2 == 0) ? food[i] : food[i] - 1;

        for (int j = 0; j < foodQuantity / 2; ++j)
        {
            answer.insert(0, to_string(i));
            answer.append(to_string(i));
        }
    }

    return answer;
}