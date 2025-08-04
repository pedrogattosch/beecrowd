#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b && (a != 0 || b != 0)){
        set<int> alice, betty;

        for(int i = 0; i < a; ++i){
            int card;
            cin >> card;
            alice.insert(card);
        }
        
        for(int i = 0; i < b; ++i){
            int card;
            cin >> card;
            betty.insert(card);
        }

        int common = 0;
        set<int>& smaller_set = (alice.size() < betty.size()) ? alice : betty;
        set<int>& larger_set = (alice.size() < betty.size()) ? betty : alice;

        for(int card : smaller_set){
            if(larger_set.count(card)){
                common++;
            }
        }

        int alice_card = alice.size() - common;
        int betty_card = betty.size() - common;

        cout << min(alice_card, betty_card) << endl;
    }

    return 0;
}