#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // ������ Begin17
    double x, y;

    cout << "������ �������� x: ";
    cin >> x;

    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    cout << "�������� ������� y = 3x^6 - 6x^2 - 7 ��� x = " << x << " �������: " << y << endl;

    return 0;
}