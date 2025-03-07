#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a;
    cin >> a;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= ('a' - 'A');
        } else {
            a[i] += ('a' - 'A');
        }
    }
    
    cout << a << endl;
}