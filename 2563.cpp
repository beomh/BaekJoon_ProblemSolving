#include <iostream>
#include <vector>

// using namespace std;

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int blackArea[100][100] = {0, };
    int result = 0;

    // 입력
    int lineNum = 0;
    cin >> lineNum;
    cin.ignore();

    for(int i=0; i<lineNum; i++){
        int N, M;
        cin >> N >> M;
        cin.ignore();

        for(int j = N; j < N + 10; j++){
            for(int k = M; k < M + 10; k++){
                blackArea[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(1 == blackArea[i][j]){
                result += 1;
            }
        }
    }
    
    cout << result << endl;
    return 0;
}