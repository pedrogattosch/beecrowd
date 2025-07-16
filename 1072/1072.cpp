#include <iostream>

using namespace std;

int main(){
    int num_cases;
    cin >> num_cases;
    int quantIn = 0, quantOut = 0;

    while(num_cases--){
        int n;
        cin >> n;
        if(n >= 10 && n <= 20){
            quantIn++;
        } else{
            quantOut++;
        }
    }

    cout << quantIn << " in" << endl;
    cout << quantOut << " out" << endl;

    return 0;
}