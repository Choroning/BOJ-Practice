#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount, data[1000000] = { 0 };
    int max = -1000000, min = 1000000;
    
    cin >> amount;
    
    for (int i = 0; i < amount; i++){
        cin >> data[i];
    }
    
    for (int i = 0; i < amount; i++){
        if(data[i] >= max)
            max = data[i];
        if(data[i] <= min)
            min = data[i];
    }
    
    cout << min << " " << max << endl;
}