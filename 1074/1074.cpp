#include <iostream>

using namespace std;

int main(){
    int num_cases;
    cin >> num_cases;
    while(num_cases--){
        int n;
        cin >> n;

        if(n == 0){
            cout << "NULL" << endl;
        } else{
            if(n % 2 == 0){
                cout << "EVEN ";
            } else{
                cout << "ODD ";
            }

            if(n > 0){
                cout << "POSITIVE" << endl;
            } else{
                cout << "NEGATIVE" << endl;
            }
        }
    }

    return 0;
}