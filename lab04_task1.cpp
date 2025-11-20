#include <iostream>
using namespace std;

double sum(double a, double b)
{
    return a + b;
}

double diff(double a, double b)
{
    return a - b;
}

double prod(double a, double b)
{
    return a*b;
}

int main()
{
    double a, b;
    cout << "Введите два вещественных числа \na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "5(a – 2 + b) + 1000a = " << sum(prod(5,diff(sum(a,b), 2)), prod(1000,a));
    return 0;
}
