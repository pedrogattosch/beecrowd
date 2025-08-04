#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2){
        int moves = 0;
        if(x1 == 0 || y1 == 0 || x2 == 0 || y2 == 0) break;
        if(x1 == x2 && y1 == y2){
            moves = 0;
        } else if(x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)){
            moves = 1;
        } else{
            moves = 2;
        }

        cout << moves << endl;
    }

    return 0;
}