#include <iostream>
#include <string>
#include <vector>


int main(){
    std::string input;
    std::cin >> input;

    std::vector<std::string> croatriaWords = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    int findCnt = 0;
    int pos = 0;
    const char* replaceStr = "**";

    for(auto& word : croatriaWords){
        while(std::string::npos != input.find(word, pos)){
            findCnt += 1;

            int findPos = input.find(word, pos);
            input.replace(findPos, word.length(), replaceStr);
        }
    }

    int remainNum = 0;
    for(const auto& ele : input){
        if('*' != ele){
            remainNum++;
        }
    }

    std::cout << findCnt + remainNum << std::endl;
    return 0;
}