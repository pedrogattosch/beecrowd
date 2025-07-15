#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int diamonds = 0, brackets = 0;
        int tam = s.size();
        for(int i = 0; i < tam; i++){
            if(s[i] == '<'){
                brackets++;
            } else if(s[i] == '>'){
                if(brackets > 0){
                    diamonds++; 
                    brackets--;
                } 
            }
        }

        cout << diamonds << endl;
    }

    return 0;
}