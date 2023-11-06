#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end());

    vector<string>::iterator iter;
    vector<string>::iterator pivot;
    string temp;

    for (iter = strings.begin() + 1; iter != strings.end(); ++iter)
    {
        temp = *iter;
        for (pivot = iter; pivot != strings.begin(); --pivot)
        {
            if (temp[n] < (*(pivot - 1))[n])
                *pivot = *(pivot - 1);
            else
                break;
        }
        *pivot = temp;
    }

    return strings;
}