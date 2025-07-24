#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        int sum = 0;
        if(x % 2 == 0){
            x++;
        }

        for(int i = 0; i < y; ++i){
            sum += x;
            x += 2;
        }

        cout << sum << endl;
    }

    return 0;
}