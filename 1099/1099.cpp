#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int num_cases;
    cin >> num_cases;

    while(num_cases--){
        int x, y;
        cin >> x >> y;
        int sum = 0;
        if(x > y) swap(x, y);
        for(int i = x+1; i < y; i++){
            if(i % 2 != 0) sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}