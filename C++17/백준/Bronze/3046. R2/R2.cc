#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int r1, r2, s;
    cin >> r1 >> s;
    r2 = s * 2 - r1;
    
    cout << r2 << endl;
}