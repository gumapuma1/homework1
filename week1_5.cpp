//Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
//Длина (метры, версты, километры)

#include <iostream>

using namespace std;

int main() {
    double inp, ans;
    int a,b;

    cout << "1. Meters" << endl
         << "2. Versts" << endl
         << "3. Kilometers" << endl
         << "Enter the translation direction and value" << endl
         << "Example: 1 3 105" << endl;
    cin >> a >> b >> inp;

    if(a<4 && a>0 && b<4 && b>0 && a!=b){
        switch(a) {
        case 1:
            switch (b) {
                case 2:
                ans = inp*0.000937383;
                cout << ans << "versts." << endl;
                break;

                case 3:
                ans = inp*0.001;
                cout << ans << " kilometers." << endl;
                break;
            }
        break;

        case 2:
            switch (b) {
                case 1:
                ans = inp*1066.8;
                cout << ans << " meters." << endl;
                break;

                case 3:
                ans = inp*1.0668;
                cout << ans << " kilometers." << endl;
                break;
            }
        break;

        case 3:
            switch (b) {
                case 1:
                ans = inp*1000;
                cout << ans << " meters." << endl;
                break;

                case 2:
                ans = inp*0.9373;
                cout << ans << " versrs." << endl;
                break;
            }
        break;
        }
    }
    else cout << "Invalid input..." << endl;

    return 0;
}
