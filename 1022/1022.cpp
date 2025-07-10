#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

// greatest common divisor
int gcd(int a, int b){
    a = abs(a);
    b = abs(b);
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    } 

    return a;
}

void simplify(int &numerator, int &denominator){
    int common_divisor = gcd(numerator, denominator);
    numerator /= common_divisor;
    denominator /= common_divisor;

    if(denominator < 0){
        numerator *= -1;
        denominator *= -1;
    }
}

void operation(int n1, int d1, int n2, int d2, char op, int &res_num, int &res_den){
    switch(op){
        case '+':
            res_num = n1 * d2 + n2 * d1;
            res_den = d1 * d2;
            break;
        case '-':
            res_num = n1 * d2 - n2 * d1;
            res_den = d1 * d2;
            break;
        case '*':
            res_num = n1 * n2;
            res_den = d1 * d2;
            break;
        case '/':
            res_num = n1 * d2;
            res_den = n2 * d1;
            break;
    }
}


int main(){
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; ++i){
        string line;
        getline(cin, line);
        istringstream iss(line);

        int n1, d1, n2, d2;
        char op, slash;

        iss >> n1 >> slash >> d1 >> op >> n2 >> slash >> d2;

        int res_num, res_den;
        operation(n1, d1, n2, d2, op, res_num, res_den);

        int simplified_num = res_num;
        int simplified_den = res_den;
        simplify(simplified_num, simplified_den);

        cout << res_num << "/" << res_den << " = " << simplified_num << "/" << simplified_den << endl;
    }

    return 0;
}