#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 9; i++){
        for(int j = 7; j >= 5; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
        i++;
    }

    return 0;
}