#include <iostream>
using namespace std;

int main()
{
    int total, t_amount, price, amount, cal_total = 0;
    
    cin >> total;
    cin >> t_amount;
    
    while(t_amount){
        cin >> price >> amount;
        cal_total += price * amount;
        
        t_amount--;
    }
    
    if (total == cal_total)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}