#include <iostream>
using namespace std;

double add(double a,double b)
{
    return (a + b)/2. ;
}

double add(double a,double b,double c)
{
    return (a + b + c)/3. ;
}

double add(double a,double b, double c, double d)
{
    return (a + b + c + d)/4. ;
}

int main()
{
    cout << add(2.1,-1) << "\t" << add(3,4,10) << "\t" << add(0,-1.1,10,10.1) << endl;
}