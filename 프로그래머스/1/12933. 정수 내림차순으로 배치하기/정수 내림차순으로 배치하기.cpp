#include <string>
#include <vector>

using namespace std;

void Swap(long long* val1, long long* val2)
{
    long long temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void DescSort(vector<long long>& arr)
{
    for (int i = 0; i < arr.size() - 1; ++i)
    {
        for (int j = i + 1; j < arr.size(); ++j)
        {
            if (arr[i] < arr[j])
                Swap(&arr[i], &arr[j]);
        }
    }
}

long long solution(long long n) {
    long long answer = 0;
    std::vector<long long> arrVec;
    string numberString;

    while (n)
    {
        arrVec.push_back(n % 10);
        n = n / 10;
    }

    DescSort(arrVec);

    for (int i = 0; i < arrVec.size(); ++i)
        numberString += to_string(arrVec[i]);

    answer = stoll(numberString);

    return answer;
}