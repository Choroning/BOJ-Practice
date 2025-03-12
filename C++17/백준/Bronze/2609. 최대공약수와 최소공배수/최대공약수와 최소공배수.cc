#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, tempA, tempB, gcd, lcm;     // gcd: 최대공약수, lcm: 최소공배수
    cin >> a >> b;
    tempA = a;
    tempB = b;
    
    while (tempB != 0) {
        int r = tempA % tempB;
        tempA = tempB;
        tempB = r;
    }
    
    gcd = tempA;
    lcm = (a * b) / gcd;
    
    cout << gcd << "\n" << lcm << "\n";
}