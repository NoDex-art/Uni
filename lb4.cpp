#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits> // ��� numeric_limits

using namespace std;

// ��������� ������� (����������)
int rootCount(double a, double b, double c);
bool isOddThreeDigit(int n);
int hundredsDigit(int n);
void task1();
void task2();
void task3();
void task4();


// ���������� �������
// �������� ������� ������ ����������� �������
int rootCount(double a, double b, double c) {
    if (a == 0) {
        return -1; // �� � ���������� �������� (�������)
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        return 2; // ��� ����� �����
    }
    else if (discriminant == 0) {
        return 1; // ���� ����� (��� �����������)
    }
    else {
        return 0; // ���� ������ ������
    }
}

// ��������, �� ����� � �������� ����������
bool isOddThreeDigit(int n) {
    return (n > 99 && n < 1000 && n % 2 != 0);
}

// ������� ����� ������ �����
int hundredsDigit(int n) {
    if (n < 100) return -1; // �������, ����� ������

    n = abs(n); // ������, ���� ��'����
    if (n > 999) {
        return (n / 100) % 10;
    }
    else if (n > 99) {
        return n / 100; // ��������� ����� ������
    }
    else return -1;
}


void task1() {
    double a, b, c;
    cout << "������ ����������� ����������� ������� (a, b, c): ";
    cin >> a >> b >> c;

    int roots = rootCount(a, b, c);
    if (roots == -1) {
        cout << "�� � ���������� �������� (a �� ���� ���� 0)." << endl;
    }
    else {
        cout << "ʳ������ ������: " << roots << endl;
    }
}

void task2() {
    int num;
    cout << "������ ���� �����: ";
    cin >> num;

    // �������� �� ���������� �����
    if (cin.fail()) {
        cout << "����������� ���. ���� �����, ������ ���� �����." << endl;
        cin.clear(); // ������� �������� �������
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // �������� ����������� ���
        return;
    }

    if (isOddThreeDigit(num)) {
        cout << num << " � �������� ���������� ������." << endl;
    }
    else {
        cout << num << " �� � �������� ���������� ������." << endl;
    }
}

void task3() {
    int num;
    cout << "������ ���� �����: ";
    cin >> num;

    if (cin.fail()) {
        cout << "����������� ���. ���� �����, ������ ���� �����." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    int hundreds = hundredsDigit(num);
    if (hundreds == -1) {
        cout << "����� ������ ��� ������ ��������� �������." << endl;
    }
    else {
        cout << "����� ������ ����� " << num << " : " << hundreds << endl;
    }
}



void task4() {
    bool input_correct = false;
    while (!input_correct) {
        cout << "������ ��������:" << endl;
        cout << "1. ����� ����������� �������" << endl;
        cout << "2. �������� �� ������� ��������� �����" << endl;
        cout << "3. ����� ������" << endl;
        cout << "4. �����" << endl;

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
            cout << "����������� ����. ��������� �� ���." << endl;
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