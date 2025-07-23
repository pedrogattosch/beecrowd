#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int age;
    int sum =0, count = 0;
    while(cin >> age && age > 0){
        sum += age;
        count++;
    }

    double average = (double)sum / count;
    cout << fixed << setprecision(2);
    cout << average << endl;

    return 0;
}