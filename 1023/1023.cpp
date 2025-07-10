#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main(){
    int N, cityNumber = 0;
    
    while(true){
        cin >> N;
        if (N == 0) break; 
        
        cityNumber++;
        if (cityNumber > 1) cout << endl;
        
        map<int, int> groups; 
        int totalResidents = 0;
        int totalConsumption = 0;

        for (int i = 0; i < N; i++) {
            int residents, consumption;
            cin >> residents >> consumption;
            
            int perPerson = consumption / residents; 
            groups[perPerson] += residents; 
            
            totalResidents += residents;
            totalConsumption += consumption;
        }
        
        cout << "Cidade# " << cityNumber << ":" << endl;
        
        bool first = true;
        for(const auto& group : groups){
            if(!first) cout << " ";
            cout << group.second << "-" << group.first;
            first = false;
        }
        cout << endl;
 
        double average = (double)totalConsumption / totalResidents;
        cout.precision(2);
        cout << fixed << "Consumo medio: " << floor(average * 100) / 100 << " m3." << endl;
    }
    
    return 0;
}