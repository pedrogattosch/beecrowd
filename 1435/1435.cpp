#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        vector<vector<int>> matrix(n, vector<int>(n));

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                int val = min({i, n - 1 -i, j, n - 1 - j}) + 1;
                matrix[i][j] = val;
            }
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(j == 0){
                    cout << setw(3) << matrix[i][j];
                } else{
                    cout << " " << setw(3) << matrix[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;

    }

    return 0;
}