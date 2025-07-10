#include <iostream>
#include <string>

using namespace std;

int main(){
    string phyluns, classes, orders;
    cin >> phyluns;
    cin >> classes;
    cin >> orders;

    if(phyluns == "vertebrado"){
        if(classes == "ave"){
            if(orders == "carnivoro"){
                cout << "aguia" << endl;
            } 
            else if(orders == "onivoro"){
                cout << "pomba" << endl;
            }
        } else{
            if(orders == "herbivoro"){
                cout << "vaca" << endl;
            } 
            else if(orders == "onivoro"){ 
                cout << "homem" << endl;
            }
        }
    } else{
        if(classes == "inseto"){
            if(orders == "hematofago"){
                cout << "pulga" << endl;
            } 
            else if(orders == "herbivoro"){
                cout << "lagarta" << endl;
            }
        } else{
            if(orders == "hematofago"){
                cout << "sanguessuga" << endl;
            } 
            else if(orders == "onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}