#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    
    while (tc--) {
        int k, n;
        cin >> k >> n;
        
        int apt[15][15] = {0};
        
        for (int room = 1; room <= n; room++) {
            apt[0][room] = room;
        }
        
        for (int floor = 1; floor <= k; floor++) {
            for (int room = 1; room <= n; room++) {
                if (room == 1)
                    apt[floor][room] = 1;
                else
                    apt[floor][room] = apt[floor-1][room] + apt[floor][room-1];
            }
        }
        cout << apt[k][n] << "\n";
    }
}