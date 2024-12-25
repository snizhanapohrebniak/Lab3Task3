#include <iostream>
#include <cmath> // Для використання abs

using namespace std;

int main() {
    // Оголошення координат двох точок (протилежні кути прямокутника)
    int x1, y1, x2, y2;

    // Введення координат
    cout << "Vvedite koordinaty pervoy tochki (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Vvedite koordinaty vtoroy tochki (x2, y2): ";
    cin >> x2 >> y2;

    // Обчислення довжини сторін прямокутника
    int width = abs(x2 - x1);
    int height = abs(y2 - y1);

    // Перевірка, чи точка збігається з початком координат
    if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
        cout << "0" << endl; // Nachalo koordinat
    }
    else {
        // Обчислення площі та периметра
        int area = width * height;
        int perimeter = 2 * (width + height);

        // Виведення результатів
        cout << "Ploshchad: " << area << endl;
        cout << "Perimetr: " << perimeter << endl;
    }

    return 0;
}