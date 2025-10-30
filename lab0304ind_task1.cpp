#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите число n \n";
    cin >> n;
    for(int k = 0; k < n; k++)
    {
        for( int i = 1; i<= n; i++)
        {
            if( i-k <=0)
                cout << "-";
            else
                cout << i - k;
        }

        cout << "\n";
    }

    return 0;
}