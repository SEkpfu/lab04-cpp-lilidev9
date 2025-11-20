#include <iostream>
using namespace std;

int fac(int n)
{
    int S=1;
    for(int i = 1; i <= n; i++){
        S *= i;
    }
    return S;
}

int xn(int x,int n)
{
    int S = 1;
    for(int i = 0; i < n; i++){
        S *= x;
    }
    return S;
}

int main()
{
    int n, m;
    cout << "a)\nВведите два числа n и m\n";
    cin >> n >> m;
    cout << "n!*m! / (n + m)! = " << (double((fac(n) * fac(m)))) / (fac(n+m)) << endl;
    int n1,x;
    cout << "\nb)\nВведите два числа x и n1\n";
    cin >> x >> n1;
    cout << "x**n1 = " << xn(x,n1) << endl;
    return 0;
}