
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Vnesite prvo stevilo: ";
    if (!(cin >> a)) {
        cout << "Napacen vnos." << endl;
        return 1;
    }

    cout << "Operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Drugo stevilo: ";
    if (!(cin >> b)) {
        cout << "Napacen vnos." << endl;
        return 1;
    }

    switch (op) {
        case '+':
            cout << "Rezultat: " << a + b << endl;
            break;
        case '-':
            cout << "Rezultat: " << a - b << endl;
            break;
        case '*':
            cout << "Rezultat: " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Deljenje z nic ni dovoljeno." << endl;
                return 1;
            }
            cout << "Rezultat: " << a / b << endl;
            break;
        case '%':
            if (a != static_cast<int>(a) ||
                b != static_cast<int>(b)) {
                cout << "Operator % zahteva celi stevili." << endl;
                return 1;
            }
            if (b == 0) {
                cout << "Deljenje z nic ni dovoljeno." << endl;
                return 1;
            }
            cout << "Rezultat: "
                 << static_cast<int>(a) % static_cast<int>(b)
                 << endl;
            break;
        default:
            cout << "Neveljaven operator." << endl;
            return 1;
    }

    return 0;
}
