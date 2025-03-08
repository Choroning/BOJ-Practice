#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int pps, extent, total;
    int n1, n2, n3, n4, n5;
    
    cin >> pps >> extent;
    total = pps * extent;
    
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << n1 - total << ' ' << n2 - total << ' ' << n3 - total << ' ' << n4 - total << ' ' << n5 - total << endl;
}