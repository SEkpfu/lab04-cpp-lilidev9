#include <iostream>
using namespace std;

double f(double tc)
{
    return 9./5 * tc + 32;
}

double k(double tc)
{
    return tc + 273;
}

void fk(double&tc)
{
    cout << "по Фаренгейту = "<< f(tc)  << ", по Кельвину = " << k(tc) << endl; 
}

int main()
{
    double tc1, tc2;
    cout << "Введите два значения температура в градусах Цельсия tc1 и tc2\n";
    cin >> tc1 >> tc2;
    cout << "tc1 по Фаренгейту = " << f(tc1) << ", по Кельвину = " << k(tc1) << endl;
    cout << "tc2 ";
    fk(tc2);
    return 0;
    
}