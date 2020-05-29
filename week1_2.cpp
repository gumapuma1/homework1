//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур
//Круг
#include <iostream>

using namespace std;

const double PI = 3.14159;

int main() {
    double r,s,p;

    cout << "Enter circle radius\n";
    cin >> r;

    s=PI*r*r;
    p=2*PI*r;

    cout << "S = " << s << endl;
    cout << "P = " << p << endl;

    return 0; 
}