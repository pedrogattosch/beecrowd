#include <iostream>
#include <string>

using namespace std;

string encryptString(string s){
    for(char &c : s){
        if(isalpha(c)){
            if(isupper(c)){
                c = 'A' + (c - 'A' + 3) % 26;
            } else{
                c = 'a' + (c - 'a' + 3) % 26;
            }
        }
    }

    int len = s.length();
   
    for(int i = 0; i < len/2; i++){
        swap(s[i], s[len-1-i]);
    }

    int half = len / 2;
    for(int i = half; i < len; i++){
        s[i] = s[i] - 1;
    }

    return s;
}

int main(){
    int N;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        string line;
        getline(cin, line);
        cout << encryptString(line) << "\n";
    }

    return 0;
}