#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> generatePrimes(int limit){
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for(int p = 2; p*p <= limit; ++p){
        if(isPrime[p]){
            for(int i = p*p; i <= limit; i += p){
                isPrime[i] = false;
            }
        }
    }

    vector<int> primes;
    for(int p = 2; p <= limit; ++p){
        if(isPrime[p]){
            primes.push_back(p);
        }
    }

    return primes;
}

int main(){
    vector<int> primes = generatePrimes(35000);

    int n;
    while(cin >> n && n != 0){
        vector<int> circle(n);
        for(int i = 0; i < n; ++i){
            circle[i] = i + 1;
        }

        int current_pos = 0;
        for(int i = 0; i < n - 1; ++i){
            int step = primes[i];
            current_pos = (current_pos + step - 1) % circle.size();
            circle.erase(circle.begin() + current_pos);
        }

        cout << circle[0] << endl;
    }
    return 0;
}