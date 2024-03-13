#include <iostream>
#include <vector>

int main(){
    using namespace std;

    int inputNum = 0;
    vector<int> measures;

    while(true){
        cin >> inputNum;
        measures.clear();
        if(inputNum == -1){
            break;
        }

        int sum = 0;
        for(int i = 1; i <= inputNum; i++){
            if(inputNum % i == 0){
                measures.emplace_back(i);
                sum += i;
            }
        }

        if(sum - inputNum == inputNum){
            cout << inputNum << " = ";
            for(int i = 0; i < measures.size() - 1; i++){
                cout << measures[i];
                if(i != measures.size() - 2)
                {
                    cout << " + ";
                }
            }
            cout << endl;
        }
        else{
            cout << inputNum << " is NOT perfect.\n";
        }
    }

    return 0;
}