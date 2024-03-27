#include <iostream>

int main(){
    int curX, curY;
    int ruX, ruY;

    std::cin >> curX >> curY >> ruX >> ruY;

    int minDist = 1000;
    
    if(minDist > curX - 0){
        minDist = curX - 0;
    }
    if(minDist > ruX - curX){
        minDist = ruX - curX;
    }
    if(minDist > curY - 0){
        minDist = curY - 0;
    }
    if(minDist > ruY - curY){
        minDist = ruY - curY;
    }

    std::cout << minDist << std::endl;
    
    return 0;
}