#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int tempo, velocidade;
    const int consumo = 12;
    
    cin >> tempo;
    cin >> velocidade;
    
    double distancia = tempo * velocidade;

    double litros = distancia / consumo;
    
    cout << fixed << setprecision(3);
    cout << litros << endl;
    
    return 0;
}