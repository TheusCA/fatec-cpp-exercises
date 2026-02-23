#include <iostream>
using namespace std;

int main() {
  
    int A, B, C, D;
    int max, min;

    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;
    cout << "Digite o valor de D: ";
    cin >> D;

    max = min = A;

    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }
    if (D > max) {
        max = D;
    }

    if (B < min) {
        min = B;
    }
    if (C < min) {
        min = C;
    }
    if (D < min) {
        min = D;
    }

    cout << "O maior valor e: " << max<<"\n";
    cout << "O menor valor e: " << min<<"\n";

    return 0;
}

