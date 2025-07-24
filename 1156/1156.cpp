#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double sum = 0;
    int b = 1;
    for(int i = 1; i <= 39; i += 2){
        sum += (float)i/(float)b;
        b *= 2;
    }

    cout << fixed << setprecision(2);
    cout << sum << endl;

    return 0;
}