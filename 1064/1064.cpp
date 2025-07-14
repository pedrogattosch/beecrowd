#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double numbers[6];
    int quant = 0;
    double sum = 0.0;

    for(int i = 0; i < 6; i++){
        cin >> numbers[i];
        if(numbers[i] > 0){
            quant++; 
            sum += numbers[i];
        }
    }

    double average = sum / quant;

    cout << quant << " valores positivos" << endl;
    cout << fixed << setprecision(1) << average << endl;

    return 0;
}