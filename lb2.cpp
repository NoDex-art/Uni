#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

// Integer17
int count_digits_greater_than_preceding(int n) {
    if (n < 999) {
        return 0; // ����� ����� 999, ���� ���� ��� ���������
    }

    string s = to_string(n);
    int count = 0;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] > s[i - 1]) {
            count++;
        }
    }
    return count;
}

// Boolean17
bool is_sphere_inside_cone(double r, double h) {
    return r <= h * sqrt(2.0) / 2.0;
}

// ������� 3
double calculate_y(double x) {
    return sin(pow(x, 3)) * (pow(2, (1 + cos(x))));

}

int main() {
    // Integer17
    int num_integer17;
    cout << "������ ����� ��� Integer17 (>= 999): ";
    cin >> num_integer17;
    cout << "ʳ������ ����, ������ �� ���������: " << count_digits_greater_than_preceding(num_integer17) << endl;


    // Boolean17
    double r_boolean17, h_boolean17;
    cout << "������ ����� ����� (r) ��� Boolean17: ";
    cin >> r_boolean17;
    cout << "������ ������ ������ (h) ��� Boolean17: ";
    cin >> h_boolean17;

    if (is_sphere_inside_cone(r_boolean17, h_boolean17)) {
        cout << "����� ��������� �������� ������." << endl;
    }
    else {
        cout << "����� �� ��������� �������� ������." << endl;
    }

    // ������� 3, 
    double x_table3;
    cout << "������ �������� x ��� ���������� �������: ";
    cin >> x_table3;
    cout << "y = " << calculate_y(x_table3) << endl;

    return 0;
}