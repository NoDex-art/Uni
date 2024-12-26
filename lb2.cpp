#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

// Integer17
int count_digits_greater_than_preceding(int n) {
    if (n < 999) {
        return 0; // Число менше 999, немає цифр для порівняння
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

// Таблиця 3
double calculate_y(double x) {
    return sin(pow(x, 3)) * (pow(2, (1 + cos(x))));

}

int main() {
    // Integer17
    int num_integer17;
    cout << "Введіть число для Integer17 (>= 999): ";
    cin >> num_integer17;
    cout << "Кількість цифр, більших за попередню: " << count_digits_greater_than_preceding(num_integer17) << endl;


    // Boolean17
    double r_boolean17, h_boolean17;
    cout << "Введіть радіус сфери (r) для Boolean17: ";
    cin >> r_boolean17;
    cout << "Введіть висоту конуса (h) для Boolean17: ";
    cin >> h_boolean17;

    if (is_sphere_inside_cone(r_boolean17, h_boolean17)) {
        cout << "Сфера поміщається всередині конуса." << endl;
    }
    else {
        cout << "Сфера НЕ поміщається всередині конуса." << endl;
    }

    // Таблиця 3, 
    double x_table3;
    cout << "Введіть значення x для обчислення функції: ";
    cin >> x_table3;
    cout << "y = " << calculate_y(x_table3) << endl;

    return 0;
}