#include <iostream>
#include <cmath>

using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    double sides[3];
    cin >> sides[0] >> sides[1] >> sides[2];

    if(sides[0] < sides[1]) swap(sides[0], sides[1]);
    if(sides[1] < sides[2]) swap(sides[1], sides[2]);
    if(sides[0] < sides[1]) swap(sides[0], sides[1]);

    double a = sides[0];
    double b = sides[1];
    double c = sides[2];

    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else{
        if(pow(a, 2) == pow(b, 2) + pow(c, 2)){
        cout << "TRIANGULO RETANGULO" << endl;
        }
        else if(pow(a, 2) > pow(b, 2) + pow(c, 2)){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else if(pow(a, 2) < pow(b, 2) + pow(c, 2)){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if(a == b && b == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if(a == b || b == c || a == c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}