#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;
    string num;
    
    while(true) {
        count = 0;
        getline(cin, num);
        
        if (num == "0")
            return 0;
        
        for (int i = 0; i < num.size() / 2; i++) {
            if (num[i] != num[num.size() - i - 1]) {
                count++;
            }
        }
        if (count == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}