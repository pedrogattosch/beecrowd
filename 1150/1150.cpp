#include <iostream>

using namespace std;

int main(){
    int x, z;
    int sum = 0, count = 0;
    cin >> x;
    cin >> z;
    while(z <= x) cin >> z;
    for(int i = x; i <= 100000; ++i){
        sum += i;
        count++;
        if(sum > z){
            break;
        }
    }
    
    cout << count << endl;

    return 0;
}