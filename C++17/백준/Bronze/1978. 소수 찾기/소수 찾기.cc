#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num == 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (!(num % i))
            return false;
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 0;
    cin >> n;
    
    int* p = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (isPrime(p[i]))
            count++;
    }
    cout << count << endl;
}