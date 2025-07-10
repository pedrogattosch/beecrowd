#include <iostream>

using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool condicao1 = (B > C);
    bool condicao2 = (D > A);
    bool condicao3 = ((C + D) > (A + B));
    bool condicao4 = (C > 0 && D > 0);
    bool condicao5 = (A % 2 == 0);
    
    if(condicao1 && condicao2 && condicao3 && condicao4 && condicao5){
        cout << "Valores aceitos" << endl;
    } else{
        cout << "Valores nao aceitos" << endl;
    }
    
    return 0;
}