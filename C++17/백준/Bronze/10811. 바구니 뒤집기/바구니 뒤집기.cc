#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n[100] = { 0 };
    int nRange, m, i, j, count;
    
    cin >> nRange >> m;
    
    for (int f = 0; f < nRange; f++){
        n[f] = f + 1;
    }
    
    for (int f = 0; f < m; f++){
        cin >> i >> j;
        count = (j - i + 1) / 2;
        
        for (int g = i, h = j; count > 0; g++, h--){
            swap(&n[g - 1], &n[h - 1]);
            count--;
        }
    }
    
    for (int f = 0; f < nRange; f++){
        cout << n[f] << " ";
    }
    cout << endl;
}
