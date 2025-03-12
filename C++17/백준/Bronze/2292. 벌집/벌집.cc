#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, sum = 1;
    cin >> n;
    
    for (int i = 0; ; i++) {
        sum += 6 * i;
        if (n <= sum) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}