#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    
    while (a != 0 && b != 0) {
        if (a > b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        cin >> a >> b;
    }
}