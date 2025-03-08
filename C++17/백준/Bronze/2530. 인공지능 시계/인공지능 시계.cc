#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, m, s, req;
    cin >> h >> m >> s >> req;
    s += req;
    
    while (h > 23 || m > 59 || s > 59) {
        if (s > 59) {
            s -= 60;
            m++;
        }
        if (m > 59) {
            m -= 60;
            h++;
        }
        if (h > 23) {
            h -= 24;
        }
    }
    cout << h << ' ' << m << ' ' << s << endl;
}