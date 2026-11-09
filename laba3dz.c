
#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, r, R;

    cout << "Введите сторону квадрата: ";
    cin >> a;

    if (a <= 0)
    {
        cout << "Ошибка! Сторона должна быть положительной.\n";
        return 0;
    }

    r = a / 2;
    R = a / sqrt(2);

    cout << fixed << setprecision(2);

    cout << "\nРЕШЕНИЕ ЗАДАЧИ №23\n";
    cout << "Сторона квадрата: " << a << endl;
    cout << "Радиус вписанной окружности: " << r << endl;
    cout << "Радиус описанной окружности: " << R << endl;

    return 0;
}
