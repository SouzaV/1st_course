#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, y;

    cout << "Digite dois numeros:" << endl;
    cin >> x;
    cin >> y;

    while (x != y){
        if (x < y) {
            cout << "Crescente!\n";
        }
        else {
            cout << "Decrecente!\n";
        }

    cout << "Digite dois numeros:" << endl;
    cin >> x;
    cin >> y;
    }

    return 0;
}
