// Lab_02.1cpp
// < ��������� ��������� >
// ����������� ������ 02.1
// ˳��� ��������.
// ������ 13

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, z1, z2;
    cout << "������ �������� a: "; cin >> a;
    cout << "������ �������� b: "; cin >> b;

    z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
    double denominator1 = (cos(a) - sin(2 * b - a));

    if (denominator1 == 0) {
        cout << "�������: ĳ����� �� ���� ���������!" << endl;
        return 1;
    }
    else {
        cout << "z1 = " << z1 << endl;
    }

    z2 = (1 + sin(b) * sin(b)) / (cos(b) * cos(b));
    double denominator2 = (cos(b) * cos(b));

    if (denominator2 == 0) {
        cout << "�������: ĳ����� �� ���� ���������!" << endl;
        return 1;
    }
    else {
        cout << "z2 = " << z2 << endl;
    }
        return 0;
}
//Hello World//