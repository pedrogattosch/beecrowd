#include <iostream>

using namespace std;

int josephus(int n, int k){
    int r = 0;
    for(int i = 1; i <= n; ++i){
        r = (r + k) % i;
    }
    return r;
}

int main(){
    int n;
    while(cin >> n && n != 0){
        int k = 1;
        while(true){
            if(josephus(n - 1, k) == 11){
                cout << k << endl;
                break;
            }
            k++;
        }
    }
    return 0;
}