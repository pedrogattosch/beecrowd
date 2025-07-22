#include <iostream>

using namespace std;

int main(){
    int option;
    int alcohol = 0, gasoline = 0, diesel = 0;
    while(true){
        cin >> option;
        if(option == 1) alcohol++;
        else if(option == 2) gasoline++;
        else if(option == 3) diesel++;
        else if(option == 4) break;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}