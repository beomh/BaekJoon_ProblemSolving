#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int upLen = 0;
    int downLen = 0;
    int stickHeight = 0;

    cin >> upLen >> downLen >> stickHeight;

    int floor = 1;
    floor += ceil(static_cast<double>(stickHeight - upLen) / static_cast<double>(upLen - downLen));

    cout << floor << endl;
    return 0;
}