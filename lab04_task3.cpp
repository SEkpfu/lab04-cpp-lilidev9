#define _USE_MATH_DEFINES 
#include <cmath> 
#include <iostream>
using namespace std;

double f(double x)
{
    if(x<0.)
        return 2. + 1./3. ;
    else
        if(0 <= x && x <= 2*M_PI)
            return x*x - 3 ;
        else
            return (1. + x*x*x)/(2*x) ;
}


int main()
{
    double a,b, ans;
    cout << "Введите a и b\n";
    cin >> a >> b;
    ans = 12.5 + f(2.) - f(4.)*f(10.) + f(a) - f(b) + f(a*b);
    cout << ans << endl;


    double x[7], y[7];
    cout << "Введите 7 вещественных чисел\n";
    for(int i = 0; i < 7; i++){
        cin >> x[i];
        y[i] = f(x[i]);
    }

    int otr = 0;
    double mx = y[0];


    cout << "Массив y: ";
    for(int i = 0; i < 7; i++){
        cout << y[i] << "\t";
        if(y[i]<0){
            otr+=1;
        }
        if(y[i]>mx){
            mx = y[i];
        }
        if(i==6){
            cout<<endl;
        }

    }
    cout << otr << " отрицательных чисел, максимальное число = " << mx << endl;
    return 0;
}
