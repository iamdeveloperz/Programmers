#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w, h;
    w = h = 0;
    
    for(int i = 0; i < sizes.size(); ++i)
    {
        if(sizes[i][0] < sizes[i][1])
            swap(sizes[i][1], sizes[i][0]);
        
        if(sizes[i][0] > w)
            w = sizes[i][0];
        if(sizes[i][1] > h)
            h = sizes[i][1];
    }
    
    return w * h;
}