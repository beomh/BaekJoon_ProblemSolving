#include <iostream>

using namespace std;

int main(){
    int num = 0;
    int totalCnt = 1;
    cin >> num;

    int i = 2;

    if(num == 1){
        cout << totalCnt << endl;
    }
    else{
        while(totalCnt < num){
            totalCnt += (6 * ((i++) - 1));
        }
        cout << i - 1 << endl;
    }
    
    return 0;
}