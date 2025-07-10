#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int number;
    double salary, total, hour;

    cin >> number;
    cin >> hour;
    cin >> salary;

    total = salary * hour;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << total << endl;

    return 0;
}