#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int count = 0;
    char word[101] = { '\0' };
    cin >> word;
    
    for (int i = 0; i < 101; i++) {
        if (word[i])
            count++;
    }
    
    cout << count << endl;
}