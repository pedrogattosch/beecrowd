#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    int lowest_value = 0, position = 0;
    cin >> x[0];
    lowest_value = x[0];
    for(int i = 1; i < n; ++i){
        cin >> x[i];
        if(x[i] < lowest_value){
            lowest_value = x[i];
            position = i;
        }
    }

    cout << "Menor valor: " << lowest_value << endl;
    cout << "Posicao: " << position << endl;

    return 0;
}