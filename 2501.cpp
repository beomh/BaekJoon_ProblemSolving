#include <iostream>
#include <vector>
#include <cstdlib>

int main(){
    using namespace std;

    int first;
    int second;
    vector<int> measures;

    cin >> first >> second;

    for(int i = 1; i <= first; i++){
        if(first % i == 0){
            measures.emplace_back(i);
            if(measures.size() == second){
                cout << measures[measures.size()-1] << endl;
                exit(EXIT_SUCCESS);
            }
        }
    }

    cout << 0 << endl;

    return 0;
}