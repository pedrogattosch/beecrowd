#include <iostream>

using namespace std;

int main(){
    int h1, m1, h2, m2;
    while(cin >> h1 >> m1 >> h2 >> m2 && (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)){
        int start = h1 * 60 + m1;
        int end = h2 * 60 + m2;
        int duration = 0;
        if(end >= start){
            duration = end - start;
        } else{
            duration = (24 * 60 - start) + end;
        }
        cout << duration << endl;
    }
    return 0;
}