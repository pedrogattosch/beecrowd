#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x;
    cin >> x;
    double n[100];

    for(int i = 0; i < 100; ++i){
        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << x << endl;
        x /= 2;
    }

    return 0;
}