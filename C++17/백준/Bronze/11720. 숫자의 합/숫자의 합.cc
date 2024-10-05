#include <iostream>
using namespace std;

int main()
{
    int amount, sum = 0;
    cin >> amount;
    
    string value;
    cin >> value;
    
    for (int i = 0; i < amount; i++) {
        sum += value[i] - '0';
    }
    /*또는,
    for (char separate : value){
        sum += separate - '0';
    }*/
    
    cout << sum << endl;
}