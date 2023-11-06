#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string numberString = "";
    const string numbers[10] =
    { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= '0' && s[i] <= '9')
        {
            answer = answer * 10 + s[i] - '0';
            continue;
        }
        else
        {
            numberString += s[i];

            for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); ++j) {
                if (!strcmp(numberString.c_str(), numbers[j].c_str()))
                {
                    answer = answer * 10 + j;
                    numberString = "";
                    break;
                }
            }
        }
    }

    return answer;
}