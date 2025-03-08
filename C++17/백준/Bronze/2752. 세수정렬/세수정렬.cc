#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int integer[3], minIdx, temp;
    for (int i = 0; i < 3; i++) {
        cin >> integer[i];
    }
    for (int i = 0; i < 2; i++) {
        minIdx = i;
        for (int j = i + 1; j < 3; j++) {
            if (integer[j] < integer[minIdx])
                minIdx = j;
        }
        temp = integer[i];
        integer[i] = integer[minIdx];
        integer[minIdx] = temp;
    }
    for (int i = 0; i < 3; i++) {
        cout << integer[i] << ' ';
    }
    cout << endl;
}