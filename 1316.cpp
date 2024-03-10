#include <iostream>
#include <vector>
#include <string>

int main(){
    int inputCnt = 0;

    std::cin >> inputCnt;
    std::cin.ignore();

    std::vector<std::string> inputStr;

    // 문자열 입력 받기
    for(int i = 0; i < inputCnt; i++){
        std::string input;
        getline(std::cin, input);
        inputStr.push_back(input);
    }

    std::vector<bool> resultVec(26, false);
    char offset = 'a';
    int resultCnt = 0;

    for(const auto& str : inputStr){
        fill(resultVec.begin(), resultVec.end(), false);
        bool isNotGroup = false;

        for(int i = 0; i < str.length(); i++) {
            if((i + 1 >= str.length()) || str[i] != str[i+1]) {
                if(true == resultVec[str[i] - offset]){
                    isNotGroup = true;
                    break;
                }
                else {
                    resultVec[str[i] - offset] = true;
                }
            }
        }

        if(false == isNotGroup){
            resultCnt++;
        }
    }

    std::cout << resultCnt << std::endl;
    return 0;
}