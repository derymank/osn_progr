#include <iostream>
using namespace std;
#include <cmath>
int main() {

    int q, w;

    q = 0;
    w = 0;

    char s;
    while (true) {
        cin >> q >> s >> w;

        switch (s) {
        case '*':
            cout << q * w;
            break;
        case '/':
            if (w != 0) {
                cout << q / w;
            }
            else {
                return 0;
            }
            break;
        case '-':
            cout << q - w;
            break;
        case '+':
            cout << q + w;
            break;
        case '^':
            cout << pow(q, w);
            break;
        case '%':
            if (w != 0) {
                cout << q % w;
            }
            else {
                return 0;
            }
            break;
        default:
            return 0;

        }
    }
