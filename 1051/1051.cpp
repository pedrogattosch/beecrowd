#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salary, taxes;
    cin >> salary;

    cout << fixed << setprecision(2);

    if(salary <= 2000.00){
        cout << "Isento" << endl;
    }
    else if(salary > 2000.00 && salary <= 3000.00){
        taxes = (salary - 2000.00) * 0.08;
        cout << "R$ " << taxes << endl;
    }
    else if(salary > 3000.00 && salary <= 4500.00){
        taxes = 80 + (salary - 3000.00) * 0.18;
        cout << "R$ " << taxes << endl;
    } else{
        taxes = 350 + (salary - 4500) * 0.28;
        cout << "R$ " << taxes << endl;
    }

    return 0;
}