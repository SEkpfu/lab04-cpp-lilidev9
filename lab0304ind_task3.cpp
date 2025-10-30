#include <iostream>

using namespace std;

int main()
{
    double S = 0;
    for( double i = 1.; i <= 2. ; i += (2-1)/10000.){
        S += (2-1)/10000. * (i + i*i);
    }
    cout << S << endl;
}   