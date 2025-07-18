#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int m, n;
    while(true){
        cin >> m >> n;
        int sum = 0;
        if(m <= 0 || n <= 0) break;
        if(m > n) swap(m, n);
        for(int i = m; i <= n; ++i){
            sum += i;
            cout << i << " ";
        }
        cout << "Sum=" << sum << endl;
    }
}