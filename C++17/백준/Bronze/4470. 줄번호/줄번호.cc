#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    string str;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        getline(cin, str, '\n');
        cout << i + 1 << ". " << str << endl;
    }
}