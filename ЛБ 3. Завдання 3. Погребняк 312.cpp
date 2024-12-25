#include <iostream>
#include <cmath> // ��� ������������ abs

using namespace std;

int main() {
    // ���������� ��������� ���� ����� (��������� ���� ������������)
    int x1, y1, x2, y2;

    // �������� ���������
    cout << "Vvedite koordinaty pervoy tochki (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Vvedite koordinaty vtoroy tochki (x2, y2): ";
    cin >> x2 >> y2;

    // ���������� ������� ����� ������������
    int width = abs(x2 - x1);
    int height = abs(y2 - y1);

    // ��������, �� ����� �������� � �������� ���������
    if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
        cout << "0" << endl; // Nachalo koordinat
    }
    else {
        // ���������� ����� �� ���������
        int area = width * height;
        int perimeter = 2 * (width + height);

        // ��������� ����������
        cout << "Ploshchad: " << area << endl;
        cout << "Perimetr: " << perimeter << endl;
    }

    return 0;
}