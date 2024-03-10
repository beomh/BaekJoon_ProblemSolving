#include <iostream>
#include <string>
#include <ctime>

void IsPalindrome(const std::string& str){
    int strLength = str.length();
    for(int idx = 0; idx < strLength/2; idx++){
        if(str[idx] != str[strLength - idx - 1]){
            printf("%d\n", 0);
            return;
        }
    }
    printf("%d\n", 1);
}

int main(){
    std::string inputStr;
    std::cin >> inputStr;

    clock_t start, finish;
    double duration;

    start = time(NULL);
    IsPalindrome(inputStr);
    finish = time(NULL);

    duration = static_cast<double>(finish - start);

    printf("Time Duration: %lf(secs)\n", duration);

}