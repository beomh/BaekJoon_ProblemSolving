#include <iostream>
#include <vector>

int main(){
    int m;
    int n;
    std::cin >> m >> n;

    std::vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;
    for(int idx = 2; idx * idx <= n; idx++){
        if(isPrime[idx]){
            for(int j = idx * idx; j <= n; j++){
                if(0 == j % idx){
                    isPrime[j] = false;
                }
            }
        }
    }

    int primeSum = 0;
    int minPrimeNum = n;
    for(int i = m; i <= n; i++){
        if(isPrime[i]){
            primeSum += i;
            if(i < minPrimeNum){
                minPrimeNum = i;
            }
        }
    }

    if(0 == primeSum && n == minPrimeNum){
        std::cout << -1 << std::endl;
    }
    else{
        std::cout << primeSum << "\n" << minPrimeNum << std::endl;
    }

    return 0;
}