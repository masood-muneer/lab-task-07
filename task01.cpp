#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of scores: ";
    cin >> size;
    int* scores = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> scores[i];
    }
    cout << "Scores entered:" << endl;
    for (int i = 0; i < size; i++) {
        cout << scores[i] << endl;
    }
    delete[] scores;
    return 0;
}
