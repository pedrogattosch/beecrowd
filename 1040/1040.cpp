#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;
    
    double media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    
    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;
    
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    } 
    else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    } else{
        cout << "Aluno em exame." << endl;
        
        double exame;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        
        double media_final = (media + exame) / 2;
        
        if(media_final >= 5.0){
            cout << "Aluno aprovado." << endl;
        } else{
            cout << "Aluno reprovado." << endl;
        }
        
        cout << "Media final: " << media_final << endl;
    }
    
    return 0;
}