#include <iostream>

using namespace std;

int main(){
    unsigned int a, b;

    while(cin >> a >> b){
        unsigned int result = a ^ b; //XOR
        cout << result << endl;
    }

    return 0;
}