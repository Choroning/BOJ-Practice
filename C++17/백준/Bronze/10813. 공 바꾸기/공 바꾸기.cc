#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n[100] = { 0 }, nRange, m, temp, i, j;
    cin >> nRange >> m;
    
    for (int g = 0; g < nRange; g++){
        n[g] = g + 1;
    }
    
    for (int g = 0; g < m; g++){
        cin >> i >> j;
        temp = n[i - 1];
        n[i - 1] = n[j - 1];
        n[j - 1] = temp;
    }
    
    for (int g = 0; g < nRange; g++)
        cout << n[g] << " ";
    cout << endl;
}