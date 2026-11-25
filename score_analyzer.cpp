#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double calculateAverage(const vector<int>& scores) {
    int sum = 0;
    for (int i = 0; i < (int)scores.size(); i++) {
        sum += scores[i];
    }
    return (double)sum / scores.size();
}

// Challenge 1: Find highest score and its 1-based position
void findHighest(const vector<int>& scores) {
    int maxScore = scores[0];
    int maxPos = 1;
    for (int i = 1; i < (int)scores.size(); i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxPos = i + 1;
        }
    }
    cout << "Highest score: " << maxScore << " at position " << maxPos << endl;
}

// Challenge 2: Find lowest score and its 1-based position
void findLowest(const vector<int>& scores) {
    int minScore = scores[0];
    int minPos = 1;
    for (int i = 1; i < (int)scores.size(); i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
            minPos = i + 1;
        }
    }
    cout << "Lowest score:  " << minScore << " at position " << minPos << endl;
}

// Challenge 3: Display and count scores above average
void displayAboveAverage(const vector<int>& scores, double average) {
    cout << "\nScores above average (" << fixed << setprecision(2) << average << "):" << endl;
    int count = 0;
    for (int i = 0; i < (int)scores.size(); i++) {
        if (scores[i] > average) {
            cout << "  Score " << scores[i] << " at position " << i + 1 << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "  None" << endl;
    }
    cout << "Total scores above average: " << count << endl;
}

int main() {
    int size;

    // Challenge 4: Dynamic size input (enter 10 for standard practical test)
    cout << "How many student scores do you want to enter? ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size! Must be greater than 0." << endl;
        return 1;
    }

    vector<int> scores(size);

    cout << "Enter " << size << " student scores:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    double average = calculateAverage(scores);

    cout << "\n--- Results ---" << endl;
    cout << "Average score: " << fixed << setprecision(2) << average << endl;
    findHighest(scores);
    findLowest(scores);
    displayAboveAverage(scores, average);

    return 0;
}
