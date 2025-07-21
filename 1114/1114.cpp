#include <iostream>

using namespace std;

int main(){
    string password;
    while(cin >> password && password != "2002") cout << "Senha Invalida" << endl;
    cout << "Acesso Permitido" << endl;
}