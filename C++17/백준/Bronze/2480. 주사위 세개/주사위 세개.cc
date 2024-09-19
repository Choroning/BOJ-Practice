#include <iostream>
using namespace std;

int main()
{
    int dice[6] = { 0 };
    int val1, val2, val3, prize = 0;
    
    cin >> val1 >> val2 >> val3;
    
    dice[val1 - 1]++;
    dice[val2 - 1]++;
    dice[val3 - 1]++;
    
    for (int i = 0; i < 6; i++){
        if (dice[i] == 3){
            prize += 10000 + (i + 1) * 1000;
        }
        if (dice[i] == 2){
            prize += 1000 + (i + 1) * 100;
        }
    }
    if (prize == 0){
        int max = (val1 > val2) ? val1 : val2;
        max = (max > val3) ? max : val3;
        prize += max * 100;
    }
    cout << prize << endl;
}