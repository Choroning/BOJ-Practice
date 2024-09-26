#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int student[30] = { 0 };
    int who;
    
    for (int i = 0; i < 28; i++){
        cin >> who;
        student[who - 1]++;
    }
    
    for (int i = 0; i < 30; i++){
        if(student[i] == 0)
            cout << i + 1 << endl;
    }
}