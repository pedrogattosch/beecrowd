#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double raio, area;
    const double PI = 3.14159;
    
    cin >> raio;
    
    area = PI * pow(raio, 2);
    
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl; 
    
    return 0;
}