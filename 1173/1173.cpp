#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x;
    cin >> x;
    cout << "N[0] = " << x << endl;
    for(int i = 1; i < 10; ++i){
        cout << "N[" << i << "] = " << x*pow(2, i) << endl;
    }

    return 0;
}