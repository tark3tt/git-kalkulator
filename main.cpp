
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Prvi broj: ";
    if (!(cin >> a)) {
        cout << "Napacen vnos." << endl;
        return 1;
    }

    cout << "Operator (+, -, *, /): ";
    cin >> op;

    cout << "Drugi broj: ";
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
        default:
            cout << "Neveljaven operator." << endl;
            return 1;
    }

    return 0;
}
