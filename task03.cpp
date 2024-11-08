#include <iostream>
using namespace std;

int main() {
    const int size = 7;
    int numbers[size];
    int countMultiplesOfFive = 0;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        if (numbers[i] % 5 == 0) {
            countMultiplesOfFive++;
        }
    }

    cout << "There are " << countMultiplesOfFive << " multiples of 5 in the array." << endl;
    return 0;
}