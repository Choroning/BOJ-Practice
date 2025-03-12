#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, currentTest, currentMax = 0;
    cin >> n >> m;
    
    int* p = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                currentTest = p[i] + p[j] + p[k];
                if (currentTest <= m && currentTest > currentMax && i != j && j != k && k != i)
                    currentMax = currentTest;
            }
        }
    }
    cout << currentMax << endl;
}