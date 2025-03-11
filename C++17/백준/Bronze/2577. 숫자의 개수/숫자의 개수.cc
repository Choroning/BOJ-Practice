#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, res, count[10] = { 0 };
    cin >> a >> b >> c;
    res = a * b * c;
    string sRes = to_string(res);
    
    for (char c : sRes) {
        count[c - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << count[i] << endl;
    }
}