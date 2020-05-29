//Пользователь вводит два числа. Необходимо поменять значения переменных так, чтобы значение первой оказалось во второй, а второй - в первой.

#include <iostream>

using namespace std;

int main() {
    double a,b,c;

    cout << "Enter variables (space separated)" << endl;
    cin >> a >> b;

    cout << "a = " << a << " b = " << b << endl;

    c=a;
    a=b;
    b=c;

    cout << "a = " << a << " b = " << b << endl;
}