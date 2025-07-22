#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y;
    cin >> x >> y;

    if(x > y) swap(x, y);
    for(int i = x + 1; i < y; ++i){
        if(i % 5 == 3 || i % 5 == 2) cout << i << endl;
    }
    return 0;
}