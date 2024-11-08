#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int hours[size];
    int maxHours = 0, maxIndex = 0;
    for (int i = 0; i < size; i++) {
        cout << "Enter hours studied by student " << i + 1 << ": ";
        cin >> hours[i];
        if (hours[i] > maxHours) {
            maxHours = hours[i];
            maxIndex = i;
        }
    }
    cout << "Hours studied by each student:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << ": " << hours[i] << " hours" << endl;
    }

    cout << "Student " << maxIndex + 1 << " studied the most with " << maxHours << " hours." << endl;
    return 0;
}