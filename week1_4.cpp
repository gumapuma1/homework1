//Вычислите значение выражения:
//(a+4b)(a−3b)+a2 при a=2 и b=3. Ответ:  -94

#include <iostream>

using namespace std;

int main() {
    double a,b,ans;

    cout << "Enter variables a and b (space separated)" << endl;
    cin >> a >> b;

    ans = (a+4*b)*(a-3*b)+a*2;

    cout << "Answer: " << ans << endl;

    return 0;
}