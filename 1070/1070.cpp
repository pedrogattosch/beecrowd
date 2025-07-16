#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int c = 0;

    while(c < 6){
        if(n % 2 == 1){
            cout << n << endl;
            c++;
        }
        n++;
    }
    
    return 0;
}