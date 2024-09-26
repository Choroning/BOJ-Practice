#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int data[10];
    int residue[42] = { 0 };
    int count = 0;
    
    for (int i = 0; i < 10; i++){
        cin >> data[i];
        residue[data[i] % 42]++;
    }
    
    for (int i = 0; i < 42; i++){
        if (residue[i] != 0)
            count++;
    }
    
    cout << count << endl;
}