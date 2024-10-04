#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for (int g = 0; g < n; g++){
        int count = 0;
        char word[101] = { '\0' };
        cin >> word;
        
        for (int i = 0; i < 101; i++) {
            if (word[i])
                count++;
        }
        cout << word[0] << word[count - 1] << endl;
    }
}