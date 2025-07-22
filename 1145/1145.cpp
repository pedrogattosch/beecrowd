#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int count = 0;
    for(int i = 1; i <= y; ++i){
        count++;
        cout << i;

        if(count == x){ 
            cout << endl; 
            count = 0;
        } else if(i < y){ 
            cout << " "; 
        }
    }
   
    if(count != 0){
        cout << endl;
    }

    return 0;
}
