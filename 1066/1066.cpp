#include <iostream>

using namespace std;

int main(){
    int numbers[5];
    int quantPos = 0, quantNeg = 0, quantEven = 0, quantOdd = 0;

    for(int i = 0; i < 5; i++){
        cin >> numbers[i];
        if(numbers[i] % 2 == 0){
            quantEven++;
        } else{
            quantOdd++;
        }
        if(numbers[i] > 0){
            quantPos++;
        } else if(numbers[i] < 0){
            quantNeg++;
        }
    }

    cout << quantEven << " valor(es) par(es)" << endl;
    cout << quantOdd << " valor(es) impar(es)" << endl;
    cout << quantPos << " valor(es) positivo(s)" << endl;
    cout << quantNeg << " valor(es) negativo(s)" << endl;

    return 0;
}