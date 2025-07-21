#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double score1, score2;
    int option;

    do{
        int valid_scores_count = 0;
        double sum_of_scores = 0.0;

        while(valid_scores_count < 1){
            cin >> score1;
            if(score1 >= 0.0 && score1 <= 10.0){
                sum_of_scores += score1;
                valid_scores_count++;
            } else{
                cout << "nota invalida" << endl;
            }
        }

        while(valid_scores_count < 2){
            cin >> score2;
            if(score2 >= 0.0 && score2 <= 10.0){
                sum_of_scores += score2;
                valid_scores_count++;
            } else{
                cout << "nota invalida" << endl;
            }
        }
        double average = sum_of_scores / 2.0;
        cout << fixed << setprecision(2);
        cout << "media = " << average << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> option;
        } while(option != 1 && option != 2);
    } while(option == 1);

    return 0;
}
