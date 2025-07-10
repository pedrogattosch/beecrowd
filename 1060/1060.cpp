#include <iostream>

using namespace std;

int main(){
    double v[6];
    int quant = 0;

    for(int i = 0; i < 6; i++){
        cin >> v[i];
        if(v[i] >= 0){
            quant++;
        }
    }

    cout << quant << " valores positivos" << endl;

    return 0;
}