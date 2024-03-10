#include <iostream>

int main(){
    using std::cin;
    using std::cout;
    using std::endl;

    int N = 0;
    int M = 0;

    cin >> N >> M;

    // 데이터 입력
    int result[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> result[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int input;
            cin >> input;
            result[i][j] += input;
        }
    }

    // 데이터 출력
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}