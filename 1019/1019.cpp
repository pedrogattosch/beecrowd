#include <iostream>

using namespace std;

int main(){
    int segundos_totais;
    
    cin >> segundos_totais;
    
    int horas = segundos_totais / 3600;       
    int resto = segundos_totais % 3600;
    int minutos = resto / 60;                  
    int segundos = resto % 60;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
    
    return 0;
}