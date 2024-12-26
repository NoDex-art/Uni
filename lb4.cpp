#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits> // Для numeric_limits

using namespace std;

// Прототипи функцій (оголошення)
int rootCount(double a, double b, double c);
bool isOddThreeDigit(int n);
int hundredsDigit(int n);
void task1();
void task2();
void task3();
void task4();


// Визначення функцій
// Обчислює кількість коренів квадратного рівняння
int rootCount(double a, double b, double c) {
    if (a == 0) {
        return -1; // Не є квадратним рівнянням (помилка)
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        return 2; // Два різних корені
    }
    else if (discriminant == 0) {
        return 1; // Один корінь (два співпадаючих)
    }
    else {
        return 0; // Немає дійсних коренів
    }
}

// Перевіряє, чи число є непарним тризначним
bool isOddThreeDigit(int n) {
    return (n > 99 && n < 1000 && n % 2 != 0);
}

// Повертає цифру сотень числа
int hundredsDigit(int n) {
    if (n < 100) return -1; // Помилка, число замале

    n = abs(n); // Модуль, якщо від'ємне
    if (n > 999) {
        return (n / 100) % 10;
    }
    else if (n > 99) {
        return n / 100; // Повертаємо цифру сотень
    }
    else return -1;
}


void task1() {
    double a, b, c;
    cout << "Введіть коефіцієнти квадратного рівняння (a, b, c): ";
    cin >> a >> b >> c;

    int roots = rootCount(a, b, c);
    if (roots == -1) {
        cout << "Не є квадратним рівнянням (a не може бути 0)." << endl;
    }
    else {
        cout << "Кількість коренів: " << roots << endl;
    }
}

void task2() {
    int num;
    cout << "Введіть ціле число: ";
    cin >> num;

    // Перевірка на коректність вводу
    if (cin.fail()) {
        cout << "Некоректний ввід. Будь ласка, введіть ціле число." << endl;
        cin.clear(); // Очищуємо прапорці помилок
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ігноруємо некоректний ввід
        return;
    }

    if (isOddThreeDigit(num)) {
        cout << num << " є непарним тризначним числом." << endl;
    }
    else {
        cout << num << " НЕ є непарним тризначним числом." << endl;
    }
}

void task3() {
    int num;
    cout << "Введіть ціле число: ";
    cin >> num;

    if (cin.fail()) {
        cout << "Некоректний ввід. Будь ласка, введіть ціле число." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    int hundreds = hundredsDigit(num);
    if (hundreds == -1) {
        cout << "Число замале або містить некоректні символи." << endl;
    }
    else {
        cout << "Цифра сотень числа " << num << " : " << hundreds << endl;
    }
}



void task4() {
    bool input_correct = false;
    while (!input_correct) {
        cout << "Оберіть завдання:" << endl;
        cout << "1. Корені квадратного рівняння" << endl;
        cout << "2. Перевірка на непарне тризначне число" << endl;
        cout << "3. Цифра сотень" << endl;
        cout << "4. Вихід" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            task1();
            input_correct = true;
            break;
        case 2:
            task2();
            input_correct = true;
            break;
        case 3:
            task3();
            input_correct = true;
            break;
        case 4:
            input_correct = true;
            break;
        default:
            cout << "Некоректний вибір. Спробуйте ще раз." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
}

int main() {
    task4();
    return 0;
}