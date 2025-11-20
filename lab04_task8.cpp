#include <iostream>
#include <cmath>
using namespace std;

void D(double&a,double&b,double&c)
{
    double d = (b*b - 4*a*c);
    if(d<0)
        cout << "Корней нет\n";
    if(d==0)
        cout << "Один корень = " << -b/(2*a) << endl;
    if(d>0)
        cout << "Два корня, первый = " << (-b + sqrt(d))/(2.*a) << " , второй = " << (-b - sqrt(d))/(2.*a) << endl;
}

int main()
{
    double a,b,c;
    cout << "Введите a, b, c\n";
    cin >> a >> b >> c;
    D(a,b,c);
    return 0;
}