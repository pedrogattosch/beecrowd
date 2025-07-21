#include <iostream>
#include <stack>

using namespace std;

int main(){
    int N, x;
    stack<int> A, station, B;

    while(cin >> N){
        if(!N) break;

        while(cin >> x){
            if(!x){
                cout << endl;
                break;
            }

            while(!A.empty()) A.pop();
            while(!station.empty()) station.pop();
            while(!B.empty()) B.pop();

            A.push(x);
            B.push(1);
            for(int i = 2; i <= N; ++i){
                cin >> x;

                A.push(x);
                B.push(i);
            }

            while(!A.empty() || !station.empty() || !B.empty()){
                if(!A.empty() && !B.empty() && A.top() == B.top()){
                    A.pop();
                    B.pop();
                } else if(!station.empty() && !B.empty() && station.top() == B.top()){
                    station.pop();
                    B.pop();
                } else if(!A.empty()){
                    station.push(A.top());
                    A.pop();
                } else{
                    break;
                }
            }

            if(A.empty() && station.empty() && B.empty()){
                cout << "Yes" << endl;
            } else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}