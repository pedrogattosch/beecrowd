#include <iostream>

using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int n1, n2;
    cin >> n1; 
    cin >> n2;
    int sum = 0;
    if(n1 > n2) swap(n1, n2);

    for(int i = n1+1; i < n2; i++){
        if(i % 2 != 0) sum += i;
    }

    cout << sum << endl;

    return 0;
}