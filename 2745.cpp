#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>

using namespace std;

std::unordered_map<char, int> OverTenNumbers = {
    {'A', 10},    {'B', 11},    {'C', 12},
    {'D', 13},    {'E', 14},    {'F', 15},
    {'G', 16},    {'H', 17},    {'I', 18},
    {'J', 19},    {'K', 20},    {'L', 21},
    {'M', 22},    {'N', 23},    {'O', 24},
    {'P', 25},    {'Q', 26},    {'R', 27},
    {'S', 28},    {'T', 29},    {'U', 30},
    {'V', 31},    {'W', 32},    {'X', 33},
    {'Y', 34},    {'Z', 35}
};

int main(){
    string Num;
    int formation;
    uint32_t result = 0;

    cin >> Num >> formation;

    int numLen = Num.length();

    for(int i = 0; i < numLen; i++){
        // 문자로 표현된 부분
        if(OverTenNumbers.end() != OverTenNumbers.find(Num[i])){
            int digit = OverTenNumbers.find(Num[i])->second;
            result += digit * pow(formation, numLen - i - 1);
        }
        // 숫자로 표현된 부분
        else{
            int digit = Num[i] - '0';
            result += digit * pow(formation, numLen - i - 1);
        }
    }

    cout << result << endl;

    return 0;
}