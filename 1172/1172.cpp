#include <iostream>

using namespace std;

int main(){
    int numbers[10];
    for(int i = 0; i < 10; ++i){
        cin >> numbers[i];
    }

    for(int i = 0; i < 10; ++i){
        if(numbers[i] <= 0){
            numbers[i] = 1;
        }
        cout << "X[" << i << "] = " << numbers[i] << endl;
    }

    return 0;
}