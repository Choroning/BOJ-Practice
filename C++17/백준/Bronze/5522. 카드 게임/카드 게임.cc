#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
}