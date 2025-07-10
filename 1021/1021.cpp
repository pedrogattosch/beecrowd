#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double valor;

    cin >> valor;
    
    int total_centavos = round(valor * 100);
    
    int notas100 = total_centavos / 10000;
    total_centavos %= 10000;
    
    int notas50 = total_centavos / 5000;
    total_centavos %= 5000;
    
    int notas20 = total_centavos / 2000;
    total_centavos %= 2000;
    
    int notas10 = total_centavos / 1000;
    total_centavos %= 1000;
    
    int notas5 = total_centavos / 500;
    total_centavos %= 500;
    
    int notas2 = total_centavos / 200;
    total_centavos %= 200;

    int moedas1 = total_centavos / 100;
    total_centavos %= 100;
    
    int moedas50 = total_centavos / 50;
    total_centavos %= 50;
    
    int moedas25 = total_centavos / 25;
    total_centavos %= 25;
    
    int moedas10 = total_centavos / 10;
    total_centavos %= 10;
    
    int moedas5 = total_centavos / 5;
    total_centavos %= 5;
    
    int moedas1cent = total_centavos;

    cout << "NOTAS:" << endl;
    cout << notas100 << " nota(s) de R$ 100.00" << endl;
    cout << notas50 << " nota(s) de R$ 50.00" << endl;
    cout << notas20 << " nota(s) de R$ 20.00" << endl;
    cout << notas10 << " nota(s) de R$ 10.00" << endl;
    cout << notas5 << " nota(s) de R$ 5.00" << endl;
    cout << notas2 << " nota(s) de R$ 2.00" << endl;
    
    cout << "MOEDAS:" << endl;
    cout << moedas1 << " moeda(s) de R$ 1.00" << endl;
    cout << moedas50 << " moeda(s) de R$ 0.50" << endl;
    cout << moedas25 << " moeda(s) de R$ 0.25" << endl;
    cout << moedas10 << " moeda(s) de R$ 0.10" << endl;
    cout << moedas5 << " moeda(s) de R$ 0.05" << endl;
    cout << moedas1cent << " moeda(s) de R$ 0.01" << endl;
    
    return 0;
}