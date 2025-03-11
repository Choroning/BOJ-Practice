#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testDataAmount, height, width, num;
    cin >> testDataAmount;
    
    while(testDataAmount) {
        int res = 1;
        cin >> height >> width >> num;
        
        while(num) {
            res += 100;
            if (res / 100 > height) {
                res -= height * 100;
                res++;
            }
            num--;
        }
        
        cout << res << endl;
        testDataAmount--;
    }
}