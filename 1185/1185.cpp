#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char operation;
    cin >> operation;

    double matrix[12][12];
    for(int i = 0; i < 12; ++i){
        for(int j = 0; j < 12; ++j){
            cin >> matrix[i][j];
        }
    }

    double sum = 0.0;
    int count = 0;

    for(int i = 0; i < 12; ++i){
        for(int j = 0; j < 12; ++j){
            if(i + j < 11){
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if(operation == 'S'){
        cout << fixed << setprecision(1);
        cout << sum << endl;
    } else if (operation == 'M'){
        if(count > 0){ 
            double average = sum / (double)count;
            cout << fixed << setprecision(1);
            cout << average << endl;
        }
    }


    return 0;
}