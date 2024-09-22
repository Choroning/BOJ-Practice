#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int vA, vB;
    
    while(1){
        cin >> vA >> vB;
        if(cin.eof())
            break;
        else
            cout << vA + vB << endl;
    }
    
    return 0;
}