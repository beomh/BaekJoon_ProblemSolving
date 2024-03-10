#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int numOfPointsOnOneSide = 2;

    for(int i = 0; i < n; i ++){
        numOfPointsOnOneSide += (numOfPointsOnOneSide - 1);
    }

    cout << numOfPointsOnOneSide * numOfPointsOnOneSide << endl;

    return 0;
}