#include <iostream>
using namespace std;

int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    int d = 0;
    int temp = n;
    while (temp > 0) {
        temp /= 10;
        d++;
    }
    
    int start = n - 9*d;
    if (start < 1) start = 1;
    
    int ans = 0;
    for (int i = start; i < n; i++) {
        if (i + digitSum(i) == n) {
            ans = i;
            break;
        }
    }
    
    cout << ans << '\n';
    return 0;
}