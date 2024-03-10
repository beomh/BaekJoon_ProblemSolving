#include <iostream>
#include <string>
#include <array>
#include <cctype>
#include <algorithm>
#include <typeinfo>

int main(){
    std::string inputStr;
    std::cin >> inputStr;

    constexpr int alphabetLength = static_cast<int>('z' - 'a' + 1);

    std::array<int, alphabetLength> numOfAlphabets = { 0 };

    for(char ch : inputStr){
        if(0 != isupper(ch))
            ch = tolower(ch);

        numOfAlphabets.at(static_cast<int>(ch-'a')) += 1;
    }

    int indexOfMaxValue = std::max_element(numOfAlphabets.begin(), numOfAlphabets.end()) - numOfAlphabets.begin();

    // 배열에서 최댓값 중복 찾기
    if(1 < std::count(numOfAlphabets.begin(), numOfAlphabets.end(), numOfAlphabets.at(indexOfMaxValue))){
        std::cout << "?\n";
    }
    else{
        std::cout << static_cast<char>(indexOfMaxValue + 'A') << "\n";
    }

    return 0;
}