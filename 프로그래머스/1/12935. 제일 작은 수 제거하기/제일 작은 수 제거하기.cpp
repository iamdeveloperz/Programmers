#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {    
    if(arr.size() <= 1)
        arr[0] = -1;
    else
    {
        vector<int>::iterator least = arr.begin();
        for(vector<int>::iterator iter = arr.begin() + 1; iter != arr.end(); ++iter)
            least = (*least) > (*iter) ? iter : least;
        arr.erase(least);
    }
    
    return arr;
}