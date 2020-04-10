#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size = 11;
    int arr1[] = {1, 2, 3, 4, 5, 5, 5, 4, 3, 2, 1};
    int arr2[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int arr3[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

    int target, _i = -1, _j, _k;
    cin >> target;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                if (arr1[i] + arr2[j] + arr3[k] == target) {
                    _i = arr1[i];
                    _j = arr2[j];
                    _k = arr3[k];

                    break;
                }
            }
        }
    }

    if (_i != -1) {
        cout << "Znaleziono match: " << target << endl;
        cout << "Użyto: " << _i << ", " << _j << ", " << _k << endl;
    } else {
        cout << "nie znaleziono matcha" << endl;
    }

    return 0;
}
