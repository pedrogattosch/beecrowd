#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    const double PI = 3.14159;
    
    cin >> a >> b >> c;
    
    triangulo = a*c/2;
    circulo = PI * pow(c, 2);
    trapezio = ((a+b)*c)/2;
    quadrado = pow(b, 2);
    retangulo = a*b;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo << endl; 
    cout << "CIRCULO: " << circulo << endl; 
    cout << "TRAPEZIO: " << trapezio << endl; 
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl; 
    
    return 0;
}