#include <iostream>
using namespace std;

void znak(int n)
{
    if( -10 <= n && n <= 10)
        if(n>0)
            cout << "+";
        if(n<0)
            cout << "-";
}
void digit(int n)
{
    if(n<0)
        n = -1*n;
    switch(n)
    {
        case 0:
            cout << "ноль\n";
            break;
        case 1:
            cout << "один\n";
            break;
        case 2:
            cout << "два\n";
            break;
        case 3:
            cout << "три\n";
            break;
        case 4:
            cout << "четыре\n";
            break;
        case 5:
            cout << "пять\n";
            break;
        case 6:
            cout << "шесть\n";
            break;
        case 7:
            cout << "семь\n";
            break;
        case 8:
            cout << "восемь\n";
            break;
        case 9:
            cout << "девять\n";
            break;
        case 10:
            cout << "десять\n";
            break;
        default:
            cout << "Число не из диапозона [-10;10]";
    }
}

int main()
{
    int n;
    cout << "Введите число из интервала [-10:10]\n";
    cin >> n;
    znak(n);
    digit(n);

    return 0;
}