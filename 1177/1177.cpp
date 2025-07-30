#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    int N[1000];
    int current_value = 0;

    for(int i = 0; i < 1000; ++i){
        N[i] = current_value;
        cout << "N[" << i << "] = " << N[i] << endl;
        current_value++;
        if(current_value == T) current_value = 0;
    }

    return 0;
}