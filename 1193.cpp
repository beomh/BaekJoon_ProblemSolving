#include <iostream>

using namespace std;

int main(){
    int num;

    cin >> num;

    int floor = 1;
    while((floor * (floor + 1)) / 2 < num){
        floor++;
    }

    int child = 0;
    int parent = 0;

    int floorStart = ((floor - 1) * floor) / 2 + 1;

    // 짝수 층이라면
    if(0 == floor % 2){
        child = 1;
        parent = floor;

        child += (num - floorStart);
        parent -= (num - floorStart);
    }
    // 홀수 층이라면
    else{
        child = floor;
        parent = 1;

        child -= (num - floorStart);
        parent += (num - floorStart);
    }

    cout << child << "/" << parent << endl;

    return 0;
}