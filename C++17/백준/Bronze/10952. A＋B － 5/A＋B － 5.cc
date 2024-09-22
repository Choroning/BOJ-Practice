#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int vA, vB;
    
    while(1){
        cin >> vA >> vB;
        if (vA == 0 && vB == 0)
            break;
        cout << vA + vB << endl;
    }
    
    return 0;
}