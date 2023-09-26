/*************************
* Автор: Нургазин И.В.   *
* Дата: 20.09.2023       *
* Вариант: 6             *
*************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.14159;
    double a, b, c;//Стороны треугольника
    double A, B, C;//Углы треугольника
    double p;//Полупериметр треугольника

    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    cout << "Введите сторону c: ";
    cin >> c;

    p = (a + b + c)/2;

    double paramA = (b*b + c*c - a*a)/(2*b*c);
    A = acos(paramA);
    cout << "Угол A = " << A << endl;
    
    double paramB = (b*sin(A))/a;
    B = asin(paramB);
    cout << "Угол B = " << B << endl;
    
    C = PI - A - B;
    cout << "Угол C = " << C << endl;
    
    double paramC = +((p - a)*(p - b)) / (p*(p - c));
    C = 2 * atan(sqrt(paramC));
    cout << "Угол С, согласно второй формуле = " << C << endl;
    
    return 0;
}
