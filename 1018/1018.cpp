#include <iostream>

using namespace std;

int main(){
    int valor;

    cin >> valor;
    
    cout << valor << endl;
    
    int notas100 = valor / 100;
    valor %= 100;
    
    int notas50 = valor / 50;
    valor %= 50;
    
    int notas20 = valor / 20;
    valor %= 20;
    
    int notas10 = valor / 10;
    valor %= 10;
    
    int notas5 = valor / 5;
    valor %= 5;
    
    int notas2 = valor / 2;
    valor %= 2;
    
    int notas1 = valor;
    
    cout << notas100 << " nota(s) de R$ 100,00" << endl;
    cout << notas50 << " nota(s) de R$ 50,00" << endl;
    cout << notas20 << " nota(s) de R$ 20,00" << endl;
    cout << notas10 << " nota(s) de R$ 10,00" << endl;
    cout << notas5 << " nota(s) de R$ 5,00" << endl;
    cout << notas2 << " nota(s) de R$ 2,00" << endl;
    cout << notas1 << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}