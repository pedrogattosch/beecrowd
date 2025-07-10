#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    double salary, total, sales;

    cin >> nome;
    cin >> salary;
    cin >> sales;

    total = salary + (0.15*sales);

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

    return 0;
}