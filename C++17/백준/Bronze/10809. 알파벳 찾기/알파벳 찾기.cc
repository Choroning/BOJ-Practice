#include <iostream>
using namespace std;

int main()
{
    int aIndex[26] = { 0 }, i = 1;
    string s;
    cin >> s;
    
    for (char alphabet : s) {
        if (aIndex[alphabet - 'a'] == 0)
            aIndex[alphabet - 'a'] = i;
        i++;
    }
    for (int g = 0; g < 26; g++) {
        if (aIndex[g] != 0)
            cout << aIndex[g] - 1 << ' ';
        else
            cout << "-1 ";
    }
    cout << endl;
}