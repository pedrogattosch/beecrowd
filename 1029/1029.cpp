#include <iostream>

using namespace std;
int cont;

int fibonacci(int n){
    cont++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int number;
        cin >> number;
        cont = -1;
        int result = fibonacci(number);
        cout << "fib(" << number << ") = " << cont << " calls = " << result << endl;
    }
    return 0;
}