#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string a = "";
    int b = 0, c = 0;

    for( int i = 1;;i++)
    {
        int n;
        cin >> n;
        if(n%10==2)
            a += string(i);
        if(n%10==0 || n%3==0)
            b*=n;
        if(n/pow(10,log10(n)-1) == 2 && n/pow(10,log10(n)-2) == 2)
            c += 1
    }
    cout << a << b << c;
    return 0;
}