#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[10000] = { 0 }, amount, x;
    cin >> amount >> x;
    
    for (int i = 0; i < amount; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < amount; i++){
        if (a[i] < x)
            cout << a[i] << ' ';
    }
    
    return 0;
}