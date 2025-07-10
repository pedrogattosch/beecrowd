#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double raio, volume;
    const double PI = 3.14159;
    
    cin >> raio;
    
    volume = (4 * PI * pow(raio, 3))/3;
    
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl; 
    
    return 0;
}