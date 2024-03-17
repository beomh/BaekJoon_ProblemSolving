#include <iostream>

int main(){
    int num;
    std::cin >> num;

    int i = 2;
    while(num > 1){
        if(num % i == 0){
            std::cout << i << std::endl;
            num /= i;
        }
        else{
            i += 1;
        }
    }

    return 0;
}