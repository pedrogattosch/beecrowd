#include <iostream>

using namespace std;

int josephus(int n, int k){
    if(n == 1) return 0;
    return (josephus(n - 1, k) + k) % n;
}

int main(){
    int num_cases;
    cin >> num_cases;
    for(int i = 1; i <= num_cases; i++){
        int n, k;
        cin >> n >> k;
        int survivor_position = josephus(n, k) + 1;
        cout << "Case " << i << ": " << survivor_position << endl;
    }

    return 0;
}