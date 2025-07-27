#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n; 
    while(n--){
        int x;
        cin >> x;
        bool isPrime = true;
        if(x <= 1){
            isPrime = false;
        } else{
            for(int i = 2; i*i <= x; ++i){
                if(x % i == 0){
                    isPrime = false;
                    break;
                }
            }
        }

        if(isPrime){
            cout << x << " eh primo" << endl;
        } else{
            cout << x << " nao eh primo" << endl;
        }
    }

    return 0;
}