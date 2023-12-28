#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string solution(int a, int b) {
    string stringDay[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    
    tm tms = {};
    tms.tm_year = 2016 - 1900;
    tms.tm_mon = a - 1;
    tms.tm_mday = b;
    
    mktime(&tms);
    
    return stringDay[tms.tm_wday];
}