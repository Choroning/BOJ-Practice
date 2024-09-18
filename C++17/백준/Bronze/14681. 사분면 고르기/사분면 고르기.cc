#include <iostream>
using namespace std;

int main()
{
    int posX, posY;
    cin >> posX;
    cin >> posY;
    
    if (posX > 0){
        if (posY > 0)
            cout << "1" << endl;
        else if (posY < 0)
            cout << "4" << endl;
    }
    else if (posX < 0){
        if (posY > 0)
            cout << "2" << endl;
        else if (posY < 0)
            cout << "3" << endl;
    }
}