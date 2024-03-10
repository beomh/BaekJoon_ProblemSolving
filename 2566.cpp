#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int max = -1;
    std::pair<int, int> maxIndex;
    int inputNum = 0;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> inputNum;
            if(max < inputNum){
                max = inputNum;
                maxIndex.first = i+1;
                maxIndex.second = j+1;
            }
        }
        cin.ignore();
    }

    cout << max << endl;
    cout << maxIndex.first << " " << maxIndex.second << endl;

    return 0;
}