#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cout << i << " ";
        cout << pow(i, 2) << " ";
        cout << pow(i, 3) << endl;
    }
    
    return 0;
}