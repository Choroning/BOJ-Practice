#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string name;
    int age, weight;
    
    while (true) {
        cin >> name >> age >> weight;
        if (name == "#" && age == 0 && weight == 0)
            return 0;
        
        if (age > 17 || weight >= 80) {
            cout << name << " Senior" << endl;
        } else {
            cout << name << " Junior" << endl;
        }
    }
}