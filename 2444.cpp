#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
void solution(const T& n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++)
            cout << " ";
        for(int j = 1; j <= i * 2 - 1; j++)
            cout << "*";
        // for(int j = 1; j <= i * 2 - 1; j++)
        //     cout << " ";
        cout << "\n";
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++)
            cout << " ";
        for(int j = 1; j <= i * 2 - 1; j++)
            cout << "*";
        // for(int j = 1; j <= i * 2 - 1; j++)
        //     cout << " ";
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    clock_t start, finish;
    double duration;
    
    start = clock();
    
    // Enter your solution Function
    solution(n);

    finish = clock();

    duration = (double)(finish-start) / CLOCKS_PER_SEC;

    cout << "Total Time: " << duration << "(secs)" << endl;
}