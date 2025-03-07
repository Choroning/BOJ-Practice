#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}