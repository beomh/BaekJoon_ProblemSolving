#include <iostream>
#include <stack>
#include <unordered_map>

std::unordered_map<int, char> OverTenNumbers = {
    {10, 'A'},    
    {11, 'B'},    
    {12, 'C'},
    {13, 'D'},    
    {14, 'E'},    
    {15, 'F'},
    {16, 'G'},    
    {17, 'H'},    
    {18, 'I'},
    {19, 'J'},    
    {20, 'K'},    
    {21, 'L'},
    {22, 'M'},    
    {23, 'N'},    
    {24, 'O'},
    {25, 'P'},    
    {26, 'Q'},    
    {27, 'R'},
    {28, 'S'},    
    {29, 'T'},    
    {30, 'U'},
    {31, 'V'},    
    {32, 'W'},    
    {33, 'X'},
    {34, 'Y'},    
    {35, 'Z'}
};

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int value = 0;      // 처음 입력되는 10진수 값
    int formation = 0;  // 변환할 N진법 수

    int remain = 0;     // 나눈 후 나머지
    std::stack<int> result;

    // 입력 받기
    cin >> value >> formation;

    // 진법 변환 로직
    while(value >= formation){
        remain = value % formation;
        result.push(remain);
        value = value / formation;
    }
    result.push(value);

    while(!result.empty()){
        if(OverTenNumbers.end() != OverTenNumbers.find(result.top())){
            cout << OverTenNumbers.find(result.top())->second;
            result.pop();
        }
        else{
            cout << result.top();
            result.pop();
        }
    }

    return 0;
}