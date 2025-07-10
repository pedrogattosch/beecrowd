#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salary;
    cin >> salary;

    cout << fixed << setprecision(2);

    if(salary <= 400.00){
        double increase = salary * 0.15;
        double new_salary = salary + increase;
        cout << "Novo salario: " << new_salary << endl;
        cout << "Reajuste ganho: " << increase << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if(salary > 400.00 && salary <= 800.00){
        double increase = salary * 0.12;
        double new_salary = salary + increase;
        cout << "Novo salario: " << new_salary << endl;
        cout << "Reajuste ganho: " << increase << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(salary > 800.00 && salary <= 1200.00){
        double increase = salary * 0.1;
        double new_salary = salary + increase;
        cout << "Novo salario: " << new_salary << endl;
        cout << "Reajuste ganho: " << increase << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if(salary > 1200.00 && salary <= 2000.00){
        double increase = salary * 0.07;
        double new_salary = salary + increase;
        cout << "Novo salario: " << new_salary << endl;
        cout << "Reajuste ganho: " << increase << endl;
        cout << "Em percentual: 7 %" << endl;
    } else{
        double increase = salary * 0.04;
        double new_salary = salary + increase;
        cout << "Novo salario: " << new_salary << endl;
        cout << "Reajuste ganho: " << increase << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    
    return 0;
}