#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    char sWord[1001];
    cin >> sWord;
    
    int n;
    cin >> n;
    
    cout << sWord[n - 1] << endl;
}