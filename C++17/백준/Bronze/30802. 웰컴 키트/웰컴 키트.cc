#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t, p;
    int tshirts[6];
    int tMin = 0;
    
    cin >> n;
    for (int i = 0; i < 6; i++) {
        cin >> tshirts[i];
    }
    cin >> t >> p;
    
    for (int i = 0; i < 6; i++) {
        tMin += tshirts[i] / t;
        if (tshirts[i] % t)
            tMin++;
    }
    
    cout << tMin << endl << n / p << ' ' << n % p << endl;
}