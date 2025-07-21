#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double score1, score2;
    int valid_scores_count = 0;
    double sum_of_valid_scores = 0.0;

    while(valid_scores_count < 2){
        double current_score;
        cin >> current_score;

        if(current_score >= 0.0 && current_score <= 10.0){
            sum_of_valid_scores += current_score;
            valid_scores_count++;
        } else{
            cout << "nota invalida\n";
        }
    }

    double average = sum_of_valid_scores / 2.0;

    cout << fixed << setprecision(2);
    cout << "media = " << average << endl;

    return 0;
}
