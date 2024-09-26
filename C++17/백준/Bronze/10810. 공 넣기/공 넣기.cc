#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n[100] = { 0 }, nRange, m;
    int i, j, k;
    
    cin >> nRange >> m;
    
    for (int g = 0; g < m; g++){
        cin >> i >> j >> k;
        for (int h = i - 1; h < j; h++){
            n[h] = k;
        }
    }
    
    for (int g = 0; g < nRange; g++)
        cout << n[g] << " ";
    
    cout << endl;
}