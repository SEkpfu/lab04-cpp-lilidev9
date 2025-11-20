#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double S(int a, int h)
{
    return a*h/2. ;
}

double S(int a, int b, int y)
{
    return 1./2*a*b*sin(y*M_PI/180.) ;
}

double S(double a, double b, double c)
{
    double p = (a + b + c)/2. ;
    return sqrt( p * (p - a) * (p - b) * (p - c));
}

int main()
{
    cout << S(3,5) << "\t" << S(2,6,30) << "\t" << S(2.,3.,4.) << endl;
    return 0;
}