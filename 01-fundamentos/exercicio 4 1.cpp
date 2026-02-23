#include <iostream>
using namespace std;

int main() {
    double x, f;

    cout << "Digite o valor de x: ";
    cin >> x;

    if (x <= 1) {
        f = 1;
        cout << "O valor de F(x) e: " << f;
    } else if (x > 1 && x <= 2) {
        f = 2;
        cout << "O valor de F(x) e: " << f;
    } else if (x > 2 && x <= 3) {
        f = x * x;
        cout << "O valor de F(x) e: " << f;
    } else if (x > 3) {
        f = x * x * x;
        cout << "O valor de F(x) e: " << f;
    }

    return 0;
}
