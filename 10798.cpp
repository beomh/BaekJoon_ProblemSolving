#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    constexpr int ROWS = 5;
    constexpr int COLS = 15;

    char inputArr[ROWS][COLS];

    char ch = '\0';

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            ch = cin.get();
            if('\n' == ch){
                for(int k = j; k < COLS; k++){
                    inputArr[i][k] = '\0';
                }
                break;
            }
            inputArr[i][j] = ch;
        }
    }

    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < ROWS; j++){
            cout << inputArr[j][i];
        }
    }
    return 0;
}