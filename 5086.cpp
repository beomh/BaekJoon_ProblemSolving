#include <iostream>

int main(){
    using namespace std;

    int first = 0;
    int second = 0;

    while(true){
        cin >> first >> second;
        if(first == 0 && second == 0){
            break;
        }

        if(second % first == 0){
            cout << "factor" << endl;
        }
        else if(first % second == 0){
            cout << "multiple" << endl;
        }
        else{
            cout << "neither" << endl;
        }
    }
    return 0;
}