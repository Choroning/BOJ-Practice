#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a;
    int count;
    
    while (true) {
        getline(cin, a, '\n');
        if (a == "#")
            return 0;
        
        count = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] >= 'A' && a[i] <= 'Z') {
                a[i] += 'a' - 'A';
            }
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
                count++;
            }
        }
        cout << count << endl;
    };
}