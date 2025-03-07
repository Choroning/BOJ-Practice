#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string max, req;
    cin >> max >> req;
    
    if (max.size() >= req.size())
        cout << "go" << endl;
    else
        cout << "no" << endl;
}