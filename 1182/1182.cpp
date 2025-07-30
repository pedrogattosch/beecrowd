#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int column_index;
    char operation_type;
    double matrix[12][12];
    double sum = 0.0;

    cin >> column_index;
    cin >> operation_type;

    for(int i = 0; i < 12; ++i){
        for (int j = 0; j < 12; ++j){
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 12; ++i){
        sum += matrix[i][column_index];
    }

    if (operation_type == 'S'){
        cout << fixed << setprecision(1);
        cout << sum << endl;
    } else if(operation_type == 'M'){
        double average = sum / 12.0;
        cout << fixed << setprecision(1);
        cout << average << endl;
    }

    return 0;
}