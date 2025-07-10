#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo, quantidade;
    cin >> codigo >> quantidade;

    double total = 0.0;

    switch(codigo){
        case 1:
            total = quantidade * 4.00;
            break;
        case 2:
            total = quantidade * 4.50;
            break;
        case 3:
            total = quantidade * 5.00;
            break;
        case 4:
            total = quantidade * 2.00;
            break;
        case 5:
            total = quantidade * 1.50;
            break;
        default:
            cout << "Codigo invalido" << endl;
            return 1;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}