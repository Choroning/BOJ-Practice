#include <iostream>
using namespace std;

int main()
{
    int vA, vB;
    cin >> vA >> vB;
    
    if (vA < vB)
        cout << "<";
    else if (vA > vB)
        cout << ">";
    else
        cout << "==";
}