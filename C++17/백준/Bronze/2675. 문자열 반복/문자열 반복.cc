#include <iostream>
using namespace std;

int main()
{
    int caseCount;
    cin >> caseCount;
    
    int repCount;
    string lit;
    
    for (int i = 0; i < caseCount; i++) {
        cin >> repCount >> lit;
        
        for (char c : lit) {
            for (int g = 0; g < repCount; g++){
                cout << c;
            }
        }
        cout << endl;
    }
}