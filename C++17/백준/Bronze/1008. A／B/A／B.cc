#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cin >> a >> b;
    
    cout << fixed;
    cout.precision(15);
    
    cout << (a * 1.0) / b;
}