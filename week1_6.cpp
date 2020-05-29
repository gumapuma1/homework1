//Вводятся три целых числа. Определить какое из них наибольшее.

#include <iostream>

using namespace std;

int main() {
    int a,b,c,max;

    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;

    max = a;

    if (b>max) max = b;
    if (c>max) max = c;

    cout << "Max - " << max << endl;

    return 0;
}