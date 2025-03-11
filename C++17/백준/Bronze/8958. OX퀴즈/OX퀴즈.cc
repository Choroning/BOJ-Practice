#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string testCase;
    int n;
    cin >> n;
    
    while (n) {
        cin >> testCase;
        int count = 0, sum = 0;
        
        for (char c : testCase) {
            if (c == 'O') {
                count++;
                sum += count;
            } else {
                count = 0;
            }
        }
        cout << sum << endl;
        n--;
    }
}
