#include <iostream>
using namespace std;

int main()
{
    int amount, max = 0;
    double grade[1000], sum = 0;
    cin >> amount;
    
    for (int i = 0; i < amount; i++) {
        cin >> grade[i];
        max = (grade[i] > max) ? grade[i] : max;
    }
    
    for (int i = 0; i < amount; i++) {
        grade[i] = (grade[i] / max) * 100;
        sum += grade[i];
    }
    cout << sum / amount << endl;
}