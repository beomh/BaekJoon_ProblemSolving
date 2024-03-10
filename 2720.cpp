#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 4> UnitOfMoney = {25, 10, 5, 1};
    int caseNum = 0;
    
    int remainMoney = 0;

    cin >> caseNum;

    for(int i = 0; i < caseNum; i++){
        cin >> remainMoney;
        for(const auto& ele : UnitOfMoney){
            cout << remainMoney / ele << " ";
            remainMoney %= ele;
        }
        cout << "\n";
    }
    return 0;
}