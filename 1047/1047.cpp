#include <iostream>

using namespace std;

int main(){
    int start_h, start_m, end_h, end_m;
    cin >> start_h >> start_m >> end_h >> end_m;
    
    int start_total = start_h * 60 + start_m;
    int end_total = end_h * 60 + end_m;
    
    int duration_total;
    
    if(end_total > start_total){
        duration_total = end_total - start_total;
    } else{
        duration_total = (24 * 60 - start_total) + end_total;
    }
    
    int hours = duration_total / 60;
    int minutes = duration_total % 60;
    
    if(hours == 24 && minutes == 0){
        hours = 24;
        minutes = 0;
    }
    
    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
    
    return 0;
}