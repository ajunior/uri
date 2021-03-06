#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char op;
    double a[12][12], resultado = 0.0;

    cin >> op;

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> a[i][j];

    int x = 5, y = 7;
    double cont = 0.0;
    for (int i = 7; i < 12; i++) {
        for (int j = x; j < y; j++) {
            resultado += a[i][j];
            cont++;
        }
        x--;
        y++;
    }

    cout << setprecision(1) << fixed;

    if (op == 'M') {
        cout << resultado/cont << endl;
    }
    else
        cout << resultado << endl;

    return 0;
}