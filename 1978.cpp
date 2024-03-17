#include <iostream>
#include <vector>

bool isPrimeNum(const int& number){
    if(1 == number){
        return false;
    }

    for(int idx = 2; idx * idx <= number; idx++){
        if(0 == number % idx){
            return false;
        }
    }
    return true;
}

int main(){
    int num = 0;
    std::cin >> num;

    int isNotPrimeCnt = 0;

    for(int i = 0; i < num; i++){
        int target = 0;
        std::cin >> target;
        
        if(false == isPrimeNum(target)){
            isNotPrimeCnt += 1;
        }
    }

    std::cout << num - isNotPrimeCnt << std::endl;

    return 0;
}