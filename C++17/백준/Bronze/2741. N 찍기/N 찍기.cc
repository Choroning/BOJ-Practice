#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    cin >> a;
    
    for (int i = 1; i <= a; i++) {
        cout << i << '\n';
    }
}