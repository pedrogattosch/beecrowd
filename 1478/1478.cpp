#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(j == 0){
                    cout << setw(3) << abs(j-i) + 1;
                } else{
                    cout << " " << setw(3) << abs(j-i) + 1;
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}