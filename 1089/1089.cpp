#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        vector<int> notes(n);
        for(int i = 0; i < n; i++){
            cin >> notes[i];
        }

        int peaks = 0;
        for(int i = 0; i < n; ++i){
            int prev_index = (i - 1 + n) % n;
            int next_index = (i + 1) % n;

            if(notes[i] > notes[prev_index] && notes[i] > notes[next_index]){
                peaks++;
            } else if(notes[i] < notes[prev_index] && notes[i] < notes[next_index]){
                peaks++;
            }
        }
        cout << peaks << endl;
    }
    
    return 0;
}