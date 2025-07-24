#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += 1/(float)i;
    }

    cout << fixed << setprecision(2);
    cout << sum << endl;

    return 0;
}