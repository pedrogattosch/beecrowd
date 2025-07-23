#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;

    int aux, temp, ult=1, penult=0;

    cout << penult << " " << ult;

    for(aux = 3; aux <= n; aux++){
        cout << " " << (ult+penult);
        temp = penult;
        penult = ult;
        ult = ult + temp;
    }

    cout << endl;

    return 0;
}