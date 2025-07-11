#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int target){
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            result = mid;
            high = mid - 1;
        } else if(arr[mid] < target){
            low = mid + 1;
        } else{
            high = mid - 1; 
        }
    }
    return result;
}

int main(){
    int n, q, caseNum = 1;

    while(cin >> n >> q && (n != 0 || q != 0)){
        cout << "CASE# " << caseNum++ << ":" << endl;

        vector<int> marbles(n);
        for(int i = 0; i < n; i++){
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end());

        for(int i = 0; i < q; i++){
            int query;
            cin >> query;

            int pos = binarySearch(marbles, query);

            if(pos != -1){
                cout << query << " found at " << pos + 1 << endl;
            } else{
                cout << query << " not found" << endl;
            }
        }
    }

    return 0;
}