#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, sum, sub;
    cin >> sum >> sub;
    
    a = (sum - sub) / 2;
    b = a + sub;
    
    if ((sum % 2 != sub % 2) || a < 0 || b < 0) {
        cout << "-1" << endl;
        return 0;
        
    }
    cout << b << ' ' << a << endl;
}