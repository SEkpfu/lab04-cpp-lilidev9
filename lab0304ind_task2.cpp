#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sinn = 0;
    double S = 0.;
    
    cout << "Введите число n \n";
    cin >> n;
    for(int i = 0; i<= n; i++)
    {
        sinn += i*i;
        S += sin(sinn);
    }

    cout << "S = " << S;
    return 0;
}

