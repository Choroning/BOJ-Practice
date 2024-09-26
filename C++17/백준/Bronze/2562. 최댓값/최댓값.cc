#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int data[9] = { 0 };
    
    for (int i = 0; i < 9; i++){
        cin >> data[i];
    }
    
    int max = data[0], maxIndex = 0;
    
    for (int i = 1; i < 9; i++){
        if(data[i] > max){
            max = data[i];
            maxIndex = i;
        }
    }
    
    cout << max << endl << maxIndex + 1 << endl;
}