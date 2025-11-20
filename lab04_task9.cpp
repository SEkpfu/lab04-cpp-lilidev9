#include <iostream>
using namespace std;

bool f(double x)
{
    if( x == 1. || x == 0.)
        return false ;
    else
        if( x <= 2.)
            x = (2*x + 1./(1-x))/(3*x)  ;
        if( 2. < x && x <= 5.)
            x = 10 + 2./7.  ;
        if( x > 5. )
            x = -3 - x  ;
        return true ;
}

int main()
{
    double a, b;
    cout << "Введите два числа a и b \n";
    cin >> a >> b;

    cout << f(2.) - f(0.)*f(a) << endl;

    cout << "Введите два числа a и b \n";
    cin >> a >> b;
    cout << f(2.*a) - f(6.) + f(a*b) << endl;

    return 0;
}

