#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num_cases;
    cin >> num_cases;
    int total = 0, totalRabbit = 0, totalRat = 0, totalFrog = 0;
    while(num_cases--){
        int amount;
        char type;  
        cin >> amount >> type;
        total += amount;
        switch(type){
            case 'C':
                totalRabbit += amount;
                break;
            case 'R':
                totalRat += amount;
                break;
            case 'S':
                totalFrog += amount;
                break;
        }
    }

    double percentualRabbit = (double)totalRabbit/total * 100;
    double percentualRat = (double)totalRat/total * 100;
    double percentualFrog = (double)totalFrog/total * 100;

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << totalRabbit << endl;
    cout << "Total de ratos: " << totalRat << endl;
    cout << "Total de sapos: " << totalFrog << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualRabbit << " %" << endl;
    cout << "Percentual de ratos: " << percentualRat << " %" << endl;
    cout << "Percentual de sapos: " << percentualFrog << " %" << endl;

    return 0;
}