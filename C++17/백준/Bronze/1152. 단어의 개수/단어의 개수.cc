#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string sen;
    getline(cin, sen);
    
    int count = 0;
    for (char c : sen) {
        if (c == ' ') {
            count++;
        }
    }
    if (sen[0] == ' ')
        count--;
    if (sen.back() == ' ')
        count--;
    
    cout << count + 1 << endl;
}