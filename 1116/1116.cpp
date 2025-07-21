#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        double x, y;
        cin >> x >> y;
        if(y == 0){
            cout << "divisao impossivel" << endl;
        } else{
            double division = x / y;
            cout << fixed << setprecision(1);
            cout << division << endl;
        }
    }
}