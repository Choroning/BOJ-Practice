#include <iostream>
using namespace std;

int main()
{
    int vA, vB;        // 입력값
    int r1, r2, r3;    // vB의 자리별 숫자(백, 십, 일 순서)
    
    cin >> vA;
    cin >> vB;
    
    r1 = vB / 100;
    r2 = (vB % 100) / 10;
    r3 = (vB % 10);
    
    cout << vA * r3 << endl;
    cout << vA * r2 << endl;
    cout << vA * r1 << endl;
    cout << vA * vB << endl;
}