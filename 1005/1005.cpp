#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double notaA, notaB, media;
    
    cin >> notaA;
    cin >> notaB;
    
    media = (3.5*notaA + 7.5*notaB)/11;
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;
    
    return 0;
}