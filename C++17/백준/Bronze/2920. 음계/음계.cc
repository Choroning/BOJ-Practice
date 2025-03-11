#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int data[8];
    for (int i = 0; i < 8; i++) {
        cin >> data[i];
    }
    
    if (data[0] == 1 && data[1] == 2 && data[2] == 3 && data[3] == 4 && data[4] == 5 && data[5] == 6 && data[6] == 7)
        cout << "ascending" << endl;
    else if (data[0] == 8 && data[1] == 7 && data[2] == 6 && data[3] == 5 && data[4] == 4 && data[5] == 3 && data[6] == 2)
        cout << "descending" << endl;
    else
        cout << "mixed" << endl;
}