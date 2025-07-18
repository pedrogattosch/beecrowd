#include <iostream>

using namespace std;

int main(){
    int num_queries;
    while(cin >> num_queries && num_queries != 0){
        int n, m;
        cin >> n >> m;
        
        for(int i = 0; i < num_queries; ++i){
            int x, y;
            cin >> x >> y;
            if(x == n || y == m){
                cout << "divisa" << endl;
            } else if(x > n && y > m){
                cout << "NE" << endl;
            } else if(x > n && y < m){
                cout << "SE" << endl;
            } else if(x < n && y < m){
                cout << "SO" << endl;
            } else if(x < n && y > m){
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}