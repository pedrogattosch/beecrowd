#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct DateTime{
    int day, hour, minute, second;
};

DateTime parseInput(){
    DateTime dt;
    string line;

    getline(cin, line);
    dt.day = stoi(line.substr(4));
    
    getline(cin, line);
    dt.hour = stoi(line.substr(0, 2));
    dt.minute = stoi(line.substr(5, 2));
    dt.second = stoi(line.substr(10, 2));
    
    return dt;
}

void calculateDuration(const DateTime& start, const DateTime& end){
    long start_total = start.day * 86400 + start.hour * 3600 + start.minute * 60 + start.second;
    long end_total = end.day * 86400 + end.hour * 3600 + end.minute * 60 + end.second;
    
    long diff_seconds = end_total - start_total;
    
    if (diff_seconds < 0) {
        cout << "0 dia(s)\n0 hora(s)\n0 minuto(s)\n0 segundo(s)\n";
        return;
    }
    
    int days = diff_seconds / 86400;
    diff_seconds %= 86400;
    
    int hours = diff_seconds / 3600;
    diff_seconds %= 3600;
    
    int minutes = diff_seconds / 60;
    diff_seconds %= 60;
    
    int seconds = diff_seconds;
    
    cout << days << " dia(s)\n"
         << hours << " hora(s)\n"
         << minutes << " minuto(s)\n"
         << seconds << " segundo(s)\n";
}

int main(){
    DateTime start = parseInput();
    DateTime end = parseInput();
    
    calculateDuration(start, end);
    
    return 0;
}