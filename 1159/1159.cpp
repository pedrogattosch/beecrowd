#include <iostream>

using namespace std;

int main(){
    int x;
    while(cin >> x && x != 0){
        int sum = 0;

        if(x % 2 != 0){
            x++;
        }

        for(int i = 0; i < 5; ++i){
            sum += x;
            x += 2;
        }

        cout << sum << endl;
    }

    return 0;
}