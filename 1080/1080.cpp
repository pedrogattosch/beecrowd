#include <iostream>

using namespace std;

int main(){
    int highest = 0, position = 0;
    int n;
    
    for(int i = 1; i <= 100; i++){
        cin >> n;
        if(n > highest){
            highest = n;
            position = i;
        }
    }

    cout << highest << endl;
    cout << position << endl;

    return 0;
}