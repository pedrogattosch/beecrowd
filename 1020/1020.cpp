#include <iostream>

using namespace std;

int main(){
    int tempo;

    cin >> tempo;

    int anos = tempo / 365;       
    int resto = tempo % 365;
    int meses = resto / 30;                  
    int dias = resto % 30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}