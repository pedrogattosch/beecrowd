#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int pa, pb;
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;

        int years = 0;
        while(pa <= pb && years <= 100){
            pa += (pa * (g1/100.0));
            pb += (pb * (g2/100.0));
            years++;
        }
        
        if(years > 100){
            cout << "Mais de 1 seculo." << endl;
        } else{
            cout << years << " anos." << endl;
        }
    }

    return 0;
}