#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> par;
    vector<int> impar;
    int value;

    for (int i = 0; i < 15; ++i){
        cin >> value;
        if (value % 2 == 0){
            par.push_back(value);
            if(par.size() == 5){
                for (int j = 0; j < par.size(); ++j){
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                par.clear();
            }
        } else{
            impar.push_back(value);
            if(impar.size() == 5){
                for (int j = 0; j < impar.size(); ++j){
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                impar.clear();
            }
        }
    }

    for (int j = 0; j < impar.size(); ++j){
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }

    for (int j = 0; j < par.size(); ++j) {
        cout << "par[" << j << "] = " << par[j] << endl;
    }

    return 0;
}
