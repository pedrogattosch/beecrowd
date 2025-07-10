#include <iostream>

using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int original[3] = {a, b, c};
    int sorted[3] = {a, b, c};

    if(sorted[0] > sorted[1]) swap(sorted[0], sorted[1]);
    if(sorted[1] > sorted[2]) swap(sorted[1], sorted[2]);
    if(sorted[0] > sorted[1]) swap(sorted[0], sorted[1]);

    for(int i = 0; i < 3; i++){
        cout << sorted[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < 3; i++){
        cout << original[i] << endl;
    }

    return 0;
}