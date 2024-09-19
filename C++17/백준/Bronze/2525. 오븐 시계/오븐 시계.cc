#include <iostream>
using namespace std;

int main()
{
    int ch, cm, rt;     // current hour, minute, required time
    
    cin >> ch >> cm;
    cin >> rt;
    
    cm += rt;
    
    
    while (cm >= 60){
        ch += 1;
        cm -= 60;
    }
    while (ch >= 24)
        ch -= 24;
    
    cout << ch << " " << cm << endl;
}