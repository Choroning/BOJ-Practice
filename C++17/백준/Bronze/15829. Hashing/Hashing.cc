#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l;
    cin >> l;
    cin.ignore();
    
    string sen;
    getline(cin, sen);

    const long long MOD = 1234567891;
    long long res = 0;
    long long pow31 = 1;

    for (int i = 0; i < l; i++) {
        long long val = (sen[i] - 'a' + 1);
        res = (res + (val * pow31) % MOD) % MOD;
        pow31 = (pow31 * 31) % MOD;
    }
    cout << res << '\n';
    return 0;
}