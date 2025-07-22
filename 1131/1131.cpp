#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int option;
    int victoryInter = 0, victoryGremio = 0, draw = 0;

    do{
        int golInter, golGremio;
        cin >> golInter >> golGremio;

        if(golInter == golGremio) draw++;
        if(golInter > golGremio) victoryInter++;
        else victoryGremio++;

        do{
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> option;
        } while(option != 1 && option != 2);
    } while(option == 1);

    int total = victoryInter + victoryGremio + draw;
    cout << total << " grenais" << endl;
    cout << "Inter:" << victoryInter << endl;
    cout << "Gremio:" << victoryGremio << endl;
    cout << "Empates:" << draw << endl;
    if(victoryInter > victoryGremio) cout << "Inter venceu mais" << endl;
    else cout << "Gremio venceu mais" << endl;

    return 0;
}
