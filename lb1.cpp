#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Задача Begin17
    double x, y;

    cout << "Введіть значення x: ";
    cin >> x;

    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    cout << "Значення функції y = 3x^6 - 6x^2 - 7 при x = " << x << " дорівнює: " << y << endl;

    return 0;
}