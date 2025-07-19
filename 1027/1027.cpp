#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0){
        vector<int> heights(n);
        for(int i = 0; i < n; ++i){
            int x, y; 
            cin >> x >> y;
            heights[i] = y;
        }

        if(n <= 2){ 
            cout << n << std::endl;
            continue;
        }

        int max_wave = 2; 
        int current_wave = 2;
        int prev_direction = 0; 

        if(heights[1] > heights[0]){
            prev_direction = 1;
        } else if(heights[1] < heights[0]){
            prev_direction = -1;
        } else{ 
            prev_direction = 0; 
            current_wave = 1;
        }
        
        for(int i = 2; i < n; ++i){
            int current_direction = 0;
            if(heights[i] > heights[i-1]){
                current_direction = 1;
            } else if(heights[i] < heights[i-1]){
                current_direction = -1; 
            }

            if(current_direction != 0 && current_direction != prev_direction){
                current_wave++;
                prev_direction = current_direction;
            } else if(current_direction == 0 || current_direction == prev_direction){
                max_wave = max(max_wave, current_wave);
                current_wave = 2; 
                prev_direction = current_direction;
            }
        }
        max_wave = max(max_wave, current_wave); 
        cout << max_wave << endl;
    }

    return 0;
}