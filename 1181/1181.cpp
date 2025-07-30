#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int L;
    char T;
    cin >> L;
    cin >> T;

    double M[12][12];

    for (int i = 0; i < 12; ++i){
        for (int j = 0; j < 12; ++j){
            cin >> M[i][j];
        }
    }

    double result = 0.0;

    for (int j = 0; j < 12; ++j){
        result += M[L][j];
    }

    if (T == 'M'){
        result /= 12.0;
    }

    cout << fixed << setprecision(1);
    cout << result << endl;

    return 0;
}
