#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num_cases;
    cin >> num_cases;

    while(num_cases--){
        double n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        double average = (n1*2 + n2*3 + n3*5)/10;
        cout << fixed << setprecision(1);
        cout << average << endl;
    }

    return 0;
}