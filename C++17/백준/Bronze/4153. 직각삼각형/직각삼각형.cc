#include <iostream>
using namespace std;

void selectionSort(int* p, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (p[j] < p[minIdx]) {
                minIdx = j;
            }
        }
        int temp = p[i];
        p[i] = p[minIdx];
        p[minIdx] = temp;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tri[3];
    
    while (true) {
        for (int i = 0; i < 3; i++) {
            cin >> tri[i];
        }
        if (tri[0] + tri[1] + tri[2] == 0)
            return 0;
        
        selectionSort(tri, 3);
        if (tri[0] * tri[0] + tri[1] * tri[1] == tri[2] * tri[2])
            cout << "right\n";
        else
            cout << "wrong\n";
    }
}