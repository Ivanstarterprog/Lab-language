/**********************************
* Автор: Нургазин И.В.            *
* Дата: 20.09.2023                *
* Вариант: 6                      *
* https://onlinegdb.com/ptEA6RtL1 *
**********************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.14159;
    
    double a, b, c; //Стороны треугольника
    double angleA, angleB, angleC, checkC; //Углы треугольника
    double p; //Полупериметр треугольника
    double paramA, paramB, paramC;

    cout << "Введите сторону a: "; 
    cin >> a;
    cout << "Введите сторону b: ";  
    cin >> b;
    cout << "Введите сторону c: ";  
    cin >> c;
 
    paramA = (b * b + c * c - a * a) / (2 * b * c);
    angleA = acos(paramA);
    paramB = (b * sin(angleA) ) / a;
    angleB = asin(paramB);
    angleC = PI - angleA - angleB;
    p = (a + b + c) / 2;
    paramC = ( (p - a) * (p - b) ) / (p * (p - c) );
    checkC = 2 * atan( sqrt(paramC) );
    
    cout << "Угол A = " << angleA << endl 
    << "Угол B = " << angleB << endl 
    << "Угол C = " << angleC << endl 
    << "Угол С, согласно второй формуле = " << checkC << endl;
    
    return 0;
}
