#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int value[100], amount, finding, count = 0;
    cin >> amount;
    
    for (int i = 0; i < amount; i++){
        cin >> value[i];
    }
    
    cin >> finding;
    
    for (int i = 0; i < amount; i++){
        if (value[i] == finding)
            count++;
    }
    cout << count << endl;
    
    return 0;
}