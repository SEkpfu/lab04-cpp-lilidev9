#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double eps, x, y = 0, f = 1., slog = 999*999;
    cout << "Введите точность eps и x \n";
    cin >> eps >> x;
    for(double i = 1.  ; slog >= eps ; i += 2 ){
        if(i>1){
            f = i*(i-1)*f;
        }

        slog = pow(x,i)/f;
        y += slog;
    }

    cout << y << endl;
    cout << (exp(x) - exp(-x))/2. << endl;
    return 0;

}   