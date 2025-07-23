#include <iostream>

using namespace std;

int main(){
    int a, n;
    int sum = 0;
    cin >> a;
    cin >> n;
    while(n <= 0) cin >> n;
    for(int i = 0; i < n; ++i) sum += i + a;
    cout << sum << endl;

    return 0;
}