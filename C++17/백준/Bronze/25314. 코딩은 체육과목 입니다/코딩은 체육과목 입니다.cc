#include <iostream>
using namespace std;

int main()
{
    int howlong;
    cin >> howlong;
    
    howlong /= 4;
    
    for (int i = 0; i < howlong; i++)
        cout << "long" << " ";
    cout << "int" << endl;
}