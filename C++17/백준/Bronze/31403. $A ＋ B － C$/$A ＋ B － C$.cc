#include <iostream>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr); string a, b, c; cin >> a >> b >> c; cout << stoi(a) + stoi(b) - stoi(c) << endl << stoi(a+b) - stoi(c) << endl;
}