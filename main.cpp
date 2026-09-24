#include <iostream>
#include <array>

using namespace std;

const int len = 10;

int calculate_total(const array<int, len>& scores) {
    int total = 0;

    for (int score : scores) {
        total += score;
    }

    return total;
}

int main() {
    array<int, len> scores{};

    cout << "Score Calculator" << endl;
    cout << "Enter up to 10 scores." << endl;
    cout << "Enter -1 to stop entering scores." << endl;

    int score_count = 0;
    int score;

    while (score_count < len) {
        cout << "Enter score: ";
        cin >> score;

        if (score == -1) {
            break;
        }

        scores[score_count] = score;
        score_count++;
    }

    int total = calculate_total(scores);

    cout << "\nNumber of scores entered: " << score_count << endl;
    cout << "Total sum: " << total << endl;

    return 0;
}
