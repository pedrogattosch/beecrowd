#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int number1, number2, quant1, quant2;
    double total, price1, price2;

    cin >> number1 >> quant1 >> price1;
    cin >> number2 >> quant2 >> price2;

    total = quant1*price1 + quant2*price2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}