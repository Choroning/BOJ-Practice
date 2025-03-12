#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int l, res = 0;
    cin >> l;
    
    cin.ignore();
    
    string sen;
    getline(cin, sen);
    
    for (int i = 0; i < l; i++) {
        res += (sen[i] - 'a' + 1) * pow(31, i);
    }
    cout << res % 1234567891 << endl;
}