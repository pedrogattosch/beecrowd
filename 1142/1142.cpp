#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int number = 1;
    for(int i = 0; i < n; ++i){
        cout << number << " ";
        number++;
        cout << number << " ";
        number++;
        cout << number << " ";
        number++;
        cout << "PUM" << endl;
        number++;
    }

    return 0;
}