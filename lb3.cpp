#include <iostream>
#include <cmath>

using namespace std;

// If17
int if17(int a, int b, int c) {
    if (a > 0 && b > 0 && c > 0) {
        return a + b + c;
    }
    else if (a > 0 && b > 0 && c <= 0) {
        return a + b;
    }
    else if (a > 0 && b <= 0 && c > 0) {
        return a + c;
    }
    else if (a <= 0 && b > 0 && c > 0) {
        return b + c;
    }
    else if (a > 0 && b <= 0 && c <= 0) {
        return a;
    }
    else if (a <= 0 && b > 0 && c <= 0) {
        return b;
    }
    else if (a <= 0 && b <= 0 && c > 0) {
        return c;
    }
    else { // a <= 0 && b <= 0 && c <= 0
        return 0;
    }
}



bool boolean17(int r) {
    return r > 0; // Коло існує, якщо його радіус додатній
}

int main() {
    // If17 test
    cout << "If17 (2, 3, 4): " << if17(2, 3, 4) << endl;  // 9
    cout << "If17 (2, 3, -4): " << if17(2, 3, -4) << endl; // 5
    cout << "If17 (2, -3, 4): " << if17(2, -3, 4) << endl; // 6
    cout << "If17 (-2, 3, 4): " << if17(-2, 3, 4) << endl; // 7
    cout << "If17 (2, -3, -4): " << if17(2, -3, -4) << endl; // 2
    cout << "If17 (-2, 3, -4): " << if17(-2, 3, -4) << endl; // 3
    cout << "If17 (-2, -3, 4): " << if17(-2, -3, 4) << endl; // 4
    cout << "If17 (-2, -3, -4): " << if17(-2, -3, -4) << endl; // 0


    // Boolean17 test
    cout << "Boolean17 (5): " << boolean17(5) << endl; // true
    cout << "Boolean17 (-5): " << boolean17(-5) << endl; // false
    cout << "Boolean17 (0): " << boolean17(0) << endl; // false


    return 0;
}