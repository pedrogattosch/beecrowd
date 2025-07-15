#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    while(cin >> s){
        int tam = s.size();
        int parenthesis = 0;
        bool open = true;
        for(int i = 0; i < tam; i++){
            if(s[i] == '('){
                parenthesis++;
            } else if(s[i] == ')'){
                if(parenthesis > 0 && open == true) parenthesis--;
                else open = false;
            }
        }

        cout << ((parenthesis == 0 && open == true) ? "correct" : "incorrect") << endl;
    }

    return 0;
}