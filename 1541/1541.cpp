#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int A, B, C;

    while(cin >> A && A != 0){
        cin >> B >> C;

        double totalHouse = (double)(A * B);

        double totalArea = (totalHouse * 100)/C;

        int sideLenght = (int)sqrt(totalArea);

        cout << sideLenght << endl;
    }

    return 0;
}