#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int distancia;
    double consumo, media;
    
    cin >> distancia;
    cin >> consumo;

    media = distancia / consumo;

    cout << fixed << setprecision(3);
    cout << media << " km/l" << endl;
    
    return 0;
}